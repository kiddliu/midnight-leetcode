#ifndef DAY_OF_THE_YEAR_H_
#define DAY_OF_THE_YEAR_H_

#include <string>

namespace solution {

int dayOfYear(std::string date) {
  // straight forward
  // Runtime: 27 ms, faster than 19.95% of C++ online submissions for Day of the Year.
  // Memory Usage: 5.9 MB, less than 74.11% of C++ online submissions for Day of the Year.
  //
  int days[11] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

  auto result{0}, month{std::stoi(date.substr(5, 2))};
  if (month > 2) {
    auto year{std::stoi(date.substr(0, 4))};
    result += year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
  }
  if (month > 1) result += days[month - 2];
  result += std::stoi(date.substr(8));

  return result;
}

}

#endif  // DAY_OF_THE_YEAR_H_
