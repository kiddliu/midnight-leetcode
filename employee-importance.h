#ifndef EMPLOYEE_IMPORTANCE_H_
#define EMPLOYEE_IMPORTANCE_H_

#include <stack>
#include <unordered_map>
#include <vector>

#include "employee.h"

namespace solution {

int getImportance(std::vector<Employee*> employees, int id) {
  // DFS
  // Runtime: 20 ms, faster than 99.31% of C++ online submissions for Employee Importance.
  // Memory Usage: 14.2 MB, less than 41.30% of C++ online submissions for Employee Importance.
  //
  std::unordered_map<int, Employee*> m;
  for (const auto& e : employees) {
    m[e->id] = e;
  }
  auto importance{0};
  std::stack<Employee*> s;
  s.push(m[id]);
  while (!s.empty()) {
    auto e = s.top();
    s.pop();
    importance += e->importance;

    for (const auto& sub : e->subordinates) {
      s.push(m[sub]);
    }
  }
  return importance;
}

}  // namespace solution

#endif  // EMPLOYEE_IMPORTANCE_H_
