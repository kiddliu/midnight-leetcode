#ifndef DEGREE_OF_AN_ARRAY_H_
#define DEGREE_OF_AN_ARRAY_H_

#include <map>
#include <unordered_map>
#include <vector>

namespace solution {

int findShortestSubArray(std::vector<int>& nums) {
  // a lot of map, should force one-run in the loop problem
  // Runtime: 28 ms, faster than 90.66% of C++ online submissions for Degree of an Array.
  // Memory Usage: 28.7 MB, less than 13.87% of C++ online submissions for Degree of an Array.
  //
  std::unordered_map<int, std::vector<int>> um;
  for (size_t i = 0; i < nums.size(); ++i) {
    um[nums[i]].push_back(i);
  }
  std::multimap<int, int, std::greater<int>> m;
  for (const auto& p : um) {
    m.emplace(p.second.size(), p.second.back() - p.second.front() + 1);
  }

  auto result{0}, size{0};
  for (const auto& p : m) {
    if (size == 0) size = p.first;
    if (size != p.first) break;
    result = result == 0 ? p.second : std::min(result, p.second);    
  }
  return result;
}

}

#endif  // DEGREE_OF_AN_ARRAY_H_
