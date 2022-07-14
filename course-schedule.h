#ifndef COURSE_SCHEDULE_H_
#define COURSE_SCHEDULE_H_

#include <unordered_set>
#include <vector>

namespace solution {

bool dfs(std::vector<std::vector<int>>& adjacents, int i,
         std::unordered_set<int>& discovered,
         std::unordered_set<int>& finished) {
  discovered.insert(i);

  for (auto& j : adjacents[i]) {
    if (discovered.count(j)) return false;
    if (!finished.count(j)) dfs(adjacents, j, discovered, finished);
  }

  discovered.erase(i);
  finished.insert(i);
}

bool canFinish(int numCourses, std::vector<std::vector<int>>& prerequisites) {
  // CLRS algorithm
  // Runtime: 40 ms, faster than 36.51% of C++ online submissions for Course Schedule.
  // Memory Usage: 15 MB, less than 19.17% of C++ online submissions for Course Schedule.
  //
  if (prerequisites.empty()) return true;

  std::vector<std::vector<int>> adjacents(numCourses);
  for (auto& v : prerequisites) {
    adjacents[v.front()].push_back(v.back());
  }

  std::unordered_set<int> discovered, finished;

  for (auto i{0}; i < numCourses; ++i) {
    if (discovered.count(i) == 0 && finished.count(i) == 0) {
      dfs(adjacents, i, discovered, finished);
    }
  }

  return true;
}

}  // namespace solution

#endif  // !COURSE_SCHEDULE_H_
