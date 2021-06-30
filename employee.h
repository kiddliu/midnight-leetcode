#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <vector>

class Employee {
public:
  int id;
  int importance;
  std::vector<int> subordinates;
};

#endif // EMPLOYEE_H_

