#ifndef GENERATE_PARENTHESES_H_
#define GENERATE_PARENTHESES_H_

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<std::string> writeParentheses(
    int total, int offset, int rights,
    std::unordered_map<int, std::vector<std::string>>& memo) {
  if (offset == 1) return {rights == 1 ? "()" : "("};
  if (rights == 0) return {std::string(offset, '(')};
  auto key = (offset << 4) + rights;

  if (memo.count(key)) return memo[key];

  std::vector<std::string> result;
  auto min{offset == rights ? 0 : -1};
  while (++min <= rights) {
    auto v = writeParentheses(total, offset - 1, rights - min, memo);
    std::for_each(v.begin(), v.end(),
                  [&min](std::string& s) { s.append(1, '(').append(min, ')'); });
    result.insert(result.end(), v.begin(), v.end());
  }
  memo[key] = result;
  return result;
}

std::vector<std::string> generateParenthesis(int n) {
  // classic dp, need to study how to make it iterative
  // Runtime: 3 ms, faster than 74.67% of C++ online submissions for Generate Parentheses.
  // Memory Usage: 8.1 MB, less than 91.76% of C++ online submissions for Generate Parentheses.
  //
  if (n == 1) return {"()"};
  if (n == 2) return {"()()", "(())"};
  std::unordered_map<int, std::vector<std::string>> memo;

  return writeParentheses(n, n, n, memo);
}

}  // namespace solution

#endif  // GENERATE_PARENTHESES_H_
