#ifndef STUDENT_ATTENDENCE_RECORD_H_
#define STUDENT_ATTENDENCE_RECORD_H_

#include <algorithm>
#include <string>

namespace solution {

bool checkRecord(std::string s) {
  // naive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Student Attendance Record I.
  // Memory Usage: 6 MB, less than 91.17% of C++ online submissions for Student Attendance Record I.
  //
  auto p = s.cbegin(), e = s.cend();
  auto absent {0};

  while (p != e) {
    if (*p == 'A' && ++absent == 2) return false;
    if (*p == 'L'
        && p + 1 != e && *(p + 1) == 'L'
        && p + 2 != e && *(p + 2) == 'L') {
      return false;
    }
    ++p;
  }
  return true;
}

}

#endif  // STUDENT_ATTENDENCE_RECORD_H_
