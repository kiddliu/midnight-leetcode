#ifndef TWO_SUM_H_
#define TWO_SUM_H_

#include <algorithm>
#include <map>
#include <stdexcept>
#include <vector>

namespace solution {

std::vector<int> twoSum(std::vector<int>& nums, int target) {
  // Brute force
  // Runtime: 4 ms, faster than 95.07% of C++ online submissions for Two Sum.
  // Memory Usage: 8.7 MB, less than 95.71% of C++ online submissions for Two
  // Sum.
  //
  // for (size_t i = 0; i < nums.size(); ++i) {
  //  for (size_t j = i; j < nums.size(); ++j) {
  //    if (nums[i] + nums[j] == target) {
  //      return std::vector<int>({ static_cast<int>(i), static_cast<int>(j) });
  //    }
  //  }
  //}

  // With map
  // Runtime: 4 ms
  // Memory Usage : 9 MB
  //
  // std::map<int, size_t> table{{nums[0], 0}};
  // for (size_t i = 1; i < nums.size(); ++i) {
  //  auto iter = table.find(target - nums[i]);
  //  if (iter != table.end()) {
  //    return std::vector<int>{static_cast<int>(iter->second),
  //                            static_cast<int>(i)};
  //  } else {
  //    table.insert({nums[i], i});
  //  }
  //}

  throw new std::invalid_argument("");
}

}  // namespace solution

#endif  // TWO_SUM_H_
