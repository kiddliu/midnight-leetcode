#ifndef DAY_OF_THE_WEEK_H_
#define DAY_OF_THE_WEEK_H_

#include <array>
#include <string>

namespace solution {

std::string dayOfTheWeek(int day, int month, int year) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Day of the Week.
  // Memory Usage: 5.9 MB, less than 59.17% of C++ online submissions for Day of the Week.
  //
  std::array<std::string, 7> weekdays{"Sunday",    "Monday",   "Tuesday",
                                      "Wednesday", "Thursday", "Friday",
                                      "Saturday"};
  std::array<int, 11> monthdays{31,  59,  90,  120, 151, 181,
                                212, 243, 273, 304, 334};

  auto days{5};
  days += day;
  if (month - 1 > 0) days += monthdays[month - 2];
  days += (year - 1971) * 365 + (year - 1969) / 4;
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) days += month > 2;
  return weekdays[days % 7];
}

}


#endif  // DAY_OF_THE_WEEK_H_
