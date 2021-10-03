#ifndef NUMBER_OF_STUDENTS_UNABLE_TO_EAT_LUNCH_H_
#define NUMBER_OF_STUDENTS_UNABLE_TO_EAT_LUNCH_H_

#include <array>
#include <vector>

namespace solution {

int countStudents(std::vector<int>& students, std::vector<int> & sandwiches) {
  // straight forward
  // Runtime: 4 ms, faster than 56.34% of C++ online submissions for Number of Students Unable to Eat Lunch.
  // Memory Usage: 8.8 MB, less than 60.76% of C++ online submissions for Number of Students Unable to Eat Lunch.
  //
  std::array<int, 2> students_count{};
  for (const auto& s : students) {
    ++students_count[s];
  }
  auto fulfilled{0};
  for (const auto& s : sandwiches) {
    if (students_count[s] > 0) {
      --students_count[s], ++fulfilled;
    } else {
      break;
    }
  }
  return students.size() - fulfilled;
}

}

#endif  // !NUMBER_OF_STUDENTS_UNABLE_TO_EAT_LUNCH_H_
