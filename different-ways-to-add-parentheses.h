#ifndef DIFFERENT_WAYS_TO_ADD_PARENTHESES_H_
#define DIFFERENT_WAYS_TO_ADD_PARENTHESES_H_

#include <functional>
#include <string>
#include <unordered_map>
#include <vector>

namespace std {

template <typename T>
inline void hash_combine(std::size_t &seed, const T &val) {
  seed ^= std::hash<T>()(val) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

template <typename T>
inline void hash_val(std::size_t &seed, const T &val) {
  hash_combine(seed, val);
}
template <typename T, typename... Types>
inline void hash_val(std::size_t &seed, const T &val, const Types &...args) {
  hash_combine(seed, val);
  hash_val(seed, args...);
}

template <typename... Types>
inline std::size_t hash_val(const Types &...args) {
  std::size_t seed = 0;
  hash_val(seed, args...);
  return seed;
}

template <>
struct hash<std::pair<int, int>> {
  size_t operator()(const std::pair<int, int> &p) const {
    return hash_val(p.first, p.second);
  }
};

}  // namespace std

namespace solution {

int calc(int m, int n, std::function<int(int, int)> op) { return op(m, n); }

std::vector<int> diffWaysToCompute(
    std::unordered_map<std::pair<int, int>, std::vector<int>> &memo,
    std::vector<int> expression, int begin, int end) {
  if (begin >= end) return {};
  if (begin + 1 == end) return {expression[begin]};
  std::vector<int> result;

  auto offset{begin + 1};
  while (offset < end) {
    if (memo.count({begin, offset}) == 0) {
      memo[{begin, offset}] =
          diffWaysToCompute(memo, expression, begin, offset);
    }
    if (memo.count({offset + 1, end}) == 0) {
      memo[{offset + 1, end}] =
          diffWaysToCompute(memo, expression, offset + 1, end);
    }
    std::function<int(int, int)> op;
    switch (expression[offset]) {
      case -5:
        op = std::plus<int>();
        break;
      case -3:
        op = std::minus<int>();
        break;
      case -6:
        op = std::multiplies<int>();
        break;
      case -1:
        op = std::divides<int>();
        break;
    }

    for (auto &m : memo[{begin, offset}]) {
      for (auto &n : memo[{offset + 1, end}]) {
        result.push_back(op(m, n));
      }
    }

    offset += 2;
  }

  return result;
}

std::vector<int> parse(std::string &expression) {
  std::vector<int> result;

  auto n{0};
  for (auto &c : expression) {
    if (c >= '0') {
      n = n * 10 + c - '0';
    } else {
      result.push_back(n);
      result.push_back(c - '0');
      n = 0;
    }
  }
  result.push_back(n);

  return result;
}

std::vector<int> diffWaysToCompute(std::string expression) {
  // DP...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Different Ways to Add Parentheses.
  // Memory Usage: 7 MB, less than 96.20% of C++ online submissions for Different Ways to Add Parentheses.
  //
  auto parsed{parse(expression)};
  std::unordered_map<std::pair<int, int>, std::vector<int>> memo;
  auto result{diffWaysToCompute(memo, parsed, 0, parsed.size())};
  return std::vector<int>(result.begin(), result.end());
}

}  // namespace solution

#endif  // !DIFFERENT_WAYS_TO_ADD_PARENTHESES_H_
