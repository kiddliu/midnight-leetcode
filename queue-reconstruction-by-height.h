#ifndef QUEUE_RECONSTRUCTION_BY_HEIGHT_H_
#define QUEUE_RECONSTRUCTION_BY_HEIGHT_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<std::vector<int>> reconstructQueue(
    std::vector<std::vector<int>>& people) {
  // tried bruteforcing and works, but with bruteforcing I'm ignoring the characteristics of the numbers
  // only the taller person can be in front of you, then ordring the source with the height
  // and inserting back first with taller people, then the shorter ones
  // it's fucking brilliant
  // Runtime: 171 ms, faster than 61.64% of C++ online submissions for Queue Reconstruction by Height.
  // Memory Usage: 12.1 MB, less than 63.80% of C++ online submissions for Queue Reconstruction by Height.
  //
  std::sort(people.begin(), people.end(), [](auto& first, auto& second) {
    return first.front() > second.front() ||
           first.front() == second.front() && first.back() < second.back();
  });

  std::vector<std::vector<int>> result;
  for (auto& p : people) {
    result.insert(result.begin() + p.back(), p);
  }
  return result;
}

}  // namespace solution

#endif  // !QUEUE_RECONSTRUCTION_BY_HEIGHT_H_
