#ifndef SUBSETS_II_H_
#define SUBSETS_II_H_

#include <unordered_set>
#include <vector>

namespace std {

template <>
struct hash<std::vector<int>> {
  size_t operator()(const vector<int>& v) const {
    std::hash<int> hasher;
    size_t seed = 0;
    for (int i : v) {
      seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    }
    return seed;
  }
};

}  // namespace std

namespace solution {

std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums) {
  // with unordered_set...
  // Runtime: 3 ms, faster than 80.05% of C++ online submissions for Subsets II.
  // Memory Usage: 8.4 MB, less than 34.55% of C++ online submissions for Subsets II.
  //
  std::unordered_set<std::vector<int>> set{{}}, temp;

  for (auto& n : nums) {
    temp.clear();
    for (auto v : set) {
      v.push_back(n);
      temp.insert(v);
    }
    set.insert(temp.cbegin(), temp.cend());
  }

  std::vector<std::vector<int>> result{set.cbegin(), set.cend()};
  return result;
}

}

#endif  // !SUBSETS_II_H_
