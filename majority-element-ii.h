#ifndef MAJORITY_ELEMENT_II_H_
#define MAJORITY_ELEMENT_II_H_

#include <vector>

namespace solution {

std::vector<int> majorityElement(std::vector<int>& nums) {
  // Boyer–Moore
  // Runtime: 17 ms, faster than 70.99% of C++ online submissions for Majority Element II.
  // Memory Usage: 15.7 MB, less than 95.90% of C++ online submissions for Majority Element II.
  //
  auto n1{INT_MIN}, n2{INT_MIN}, n1_count{0}, n2_count{0};

  for (auto& n : nums) {
    if (n == n1) {
      ++n1_count;
    } else if (n == n2) {
      ++n2_count;
    } else if (n1_count == 0) {
      n1 = n, ++n1_count;
    } else if (n2_count == 0) {
      n2 = n, ++n2_count;
    } else {
      --n1_count, --n2_count;
    }
  }

  n1_count = n2_count = 0;
  for (auto& n : nums) {
    if (n == n1) ++n1_count;
    if (n == n2) ++n2_count;
  }

  std::vector<int> result;

  if (n1_count > nums.size() / 3) result.push_back(n1);
  if (n2_count > nums.size() / 3) result.push_back(n2);

  return result;
}

}

#endif  // !MAJORITY_ELEMENT_II_H_
