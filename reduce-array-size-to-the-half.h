#ifndef REDUCE_ARRAY_SIZE_TO_THE_HALF_H_
#define REDUCE_ARRAY_SIZE_TO_THE_HALF_H_

#include <queue>
#include <unordered_map>
#include <vector>

namespace solution {

int minSetSize(std::vector<int>& arr) {
  std::unordered_map<int, int> map;
  for (auto& n : arr) {
    ++map[n];
  }
  std::priority_queue<int> queue;
  for (auto& [key, value] : map) {
    queue.push(value);
  }
  int result{0}, count{0}, size = arr.size();
  while (count * 2 < size) {
    ++result, count += queue.top(), queue.pop();
  }
  return result;
}

}  // namespace solution

#endif  // !REDUCE_ARRAY_SIZE_TO_THE_HALF_H_
