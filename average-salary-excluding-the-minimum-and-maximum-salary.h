#ifndef AVERAGE_SALARY_EXCLUDING_THE_MINIMUM_AND_MAXIMUM_SALARY_H_
#define AVERAGE_SALARY_EXCLUDING_THE_MINIMUM_AND_MAXIMUM_SALARY_H_

#include <vector>

namespace solution {

double average(std::vector<int>& salary) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Average Salary Excluding the Minimum and Maximum Salary.
  // Memory Usage: 7.1 MB, less than 81.59% of C++ online submissions for Average Salary Excluding the Minimum and Maximum Salary.
  //
  auto max{INT_MIN}, min{INT_MAX};
  auto sum{0.};

  for (const auto& s : salary) {
    max = std::max(max, s);
    min = std::min(min, s);
    sum += s;
  }

  return (sum - max - min) / (salary.size() - 2);
}

}

#endif  // AVERAGE_SALARY_EXCLUDING_THE_MINIMUM_AND_MAXIMUM_SALARY_H_
