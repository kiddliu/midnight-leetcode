#ifndef MAXIMUM_ERASURE_VALUE_H_
#define MAXIMUM_ERASURE_VALUE_H_

#include <numeric>
#include <unordered_map>
#include <vector>

namespace solution {

int maximumUniqueSubarray(std::vector<int>& nums) {
  // sliding window...
  // Runtime: 325 ms, faster than 79.58% of C++ online submissions for Maximum Erasure Value.
  // Memory Usage: 99.5 MB, less than 82.51% of C++ online submissions for Maximum Erasure Value.
  //
  int size = nums.size();
  if (size == 1) return nums.front();

  auto result{0}, sum{0}, begin{0}, end{begin}, current{0};
  std::unordered_map<int, int> map;
  while (end < size) {
    current = nums[end];
    if (map.count(current) == 1 && map[current] >= begin) {
      for (auto i{begin}; i <= map[current]; ++i) {
        sum -= nums[i];
      }
      begin = map[current] + 1;
    }
    sum += current;
    map[current] = end++;
    result = std::max(result, sum);
  }
  return result;
}

}  // namespace solution

#endif  // !MAXIMUM_ERASURE_VALUE_H_
