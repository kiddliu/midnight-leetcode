#ifndef TOP_K_FREQUENT_ELEMENTS_H_
#define TOP_K_FREQUENT_ELEMENTS_H_

#include <queue>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
  // with priority_queue
  // Runtime: 19 ms, faster than 67.06% of C++ online submissions for Top K Frequent Elements.
  // Memory Usage: 13.6 MB, less than 71.77% of C++ online submissions for Top K Frequent Elements.
  //
  if (nums.size() == k) return nums;

  std::unordered_map<int, int> map;
  for (auto& n : nums) {
    ++map[n];
  }

  auto comparer = [&map](int first, int second) {
    return map[first] > map[second];
  };
  std::priority_queue<int, std::vector<int>, decltype(comparer)> queue{
      comparer};

  for (auto& pair : map) {
    queue.push(pair.first);
    if (queue.size() > k) {
      queue.pop();
    }
  }

  std::vector<int> result(k);
  for (auto i{k - 1}; i >= 0; --i) {
    result[i] = queue.top();
    queue.pop();
  }
  return result;
}

}

#endif  // TOP_K_FREQUENT_ELEMENTS_H_
