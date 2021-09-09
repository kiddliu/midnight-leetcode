#ifndef NUMBER_OF_STUDENTS_DOING_HOMEWORK_AT_A_GIVEN_TIME_H_
#define NUMBER_OF_STUDENTS_DOING_HOMEWORK_AT_A_GIVEN_TIME_H_

#include <vector>

namespace solution {

int busyStudent(std::vector<int>& startTime, std::vector<int>& endTime, int queryTime) {
  // straight forward
  // Runtime: 3 ms, faster than 63.24% of C++ online submissions for Number of Students Doing Homework at a Given Time.
  // Memory Usage: 10.9 MB, less than 47.70% of C++ online submissions for Number of Students Doing Homework at a Given Time.
  //
  auto result{0};
  for (size_t i = 0; i < startTime.size(); ++i) {
    result += queryTime >= startTime[i] && queryTime <= endTime[i];
  }
  return result;
}

}

#endif  // NUMBER_OF_STUDENTS_DOING_HOMEWORK_AT_A_GIVEN_TIME_H_
