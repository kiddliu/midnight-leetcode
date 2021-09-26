#ifndef MEAN_OF_ARRAY_AFTER_REMOVING_SOME_ELEMENTS_H_
#define MEAN_OF_ARRAY_AFTER_REMOVING_SOME_ELEMENTS_H_

#include <queue>
#include <vector>

namespace solution {

double trimMean(std::vector<int>& arr) {
  // straight forward, 1 pass
  // Runtime: 8 ms, faster than 68.03% of C++ online submissions for Mean of Array After Removing Some Elements.
  // Memory Usage: 9.6 MB, less than 12.02% of C++ online submissions for Mean of Array After Removing Some Elements.
  //
  auto size{arr.size() / 20};
  double sum{0};
  std::priority_queue<int> mins;
  std::priority_queue<int, std::vector<int>, std::greater<int>> maxs;

  for (const auto& n : arr) {
    sum += n;

    mins.push(n);
    if (mins.size() > size) mins.pop();

    maxs.push(n);
    if (maxs.size() > size) maxs.pop();
  }

  while (!mins.empty()) {
    sum -= mins.top();
    mins.pop();
  }

  while (!maxs.empty()) {
    sum -= maxs.top();
    maxs.pop();
  }

  return sum / (arr.size() - 2 * size);
}

}

#endif  // !MEAN_OF_ARRAY_AFTER_REMOVING_SOME_ELEMENTS_H_
