#ifndef COURSE_SCHEDULE_II_H_
#define COURSE_SCHEDULE_II_H_

#include <deque>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace solution {

std::vector<int> findOrder(int numCourses,
                           std::vector<std::vector<int>>& prerequisites) {
  // Kahn's algorithm
  // Runtime: 54 ms, faster than 13.73% of C++ online submissions for Course Schedule II.
  // Memory Usage: 20.5 MB, less than 5.18% of C++ online submissions for Course Schedule II.
  //
  std::vector<int> nodes(numCourses);
  std::iota(nodes.begin(), nodes.end(), 0);
  if (prerequisites.empty()) {
    return nodes;
  }

  std::unordered_map<int, std::unordered_set<int>> ins(numCourses), outs(numCourses);
  for (auto& v : prerequisites) {
    ins[v.back()].insert(v.front());
    outs[v.front()].insert(v.back());
  }

  std::unordered_set<int> roots{nodes.begin(), nodes.end()};
  for (auto& pre : prerequisites) {
    roots.erase(pre.front());
  }

  std::deque<int> deque{roots.begin(), roots.end()};
  std::vector<int> result;

  while (deque.size()) {
    auto& root = deque.front();
    result.push_back(root);

    for (auto& node : ins[root]) {
      outs[node].erase(root);

      if (outs[node].empty()) {
        deque.push_back(node);
        outs.erase(node);
      }
    }
    
    deque.pop_front();
  }

  return outs.empty() ? result : std::vector<int>{};
}

}  // namespace solution

#endif  // !COURSE_SCHEDULE_II_H_
