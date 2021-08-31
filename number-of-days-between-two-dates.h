#ifndef NUMBER_OF_DAYS_BETWEEN_TWO_DATES_H_
#define NUMBER_OF_DAYS_BETWEEN_TWO_DATES_H_

#include <string>

namespace solution {

void adjustYearByLeap(int& year, int& month) {
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
    year = month > 2 ? year + 3 : year - 1;
  } else {
    year = year == 2100 ? year - 1 : year / 4 * 4 + 3;
  }
}

int daysBetweenDates(std::string date1, std::string date2) {
  // fuck 2100
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Days Between Two Dates.
  // Memory Usage: 6 MB, less than 24.36% of C++ online submissions for Number of Days Between Two Dates.
  //
  auto result{0};
  if (date1 > date2) std::swap(date1, date2);

  int days[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
  auto year2 = std::stoi(date2.substr(0, 4)),
       year1 = std::stoi(date1.substr(0, 4)),
       month2 = std::stoi(date2.substr(5, 2)),
       month1 = std::stoi(date1.substr(5, 2)),
       day2 = std::stoi(date2.substr(8, 2)),
       day1 = std::stoi(date1.substr(8, 2));

  result += (year2 - year1) * 365;
  result += days[month2 - 1] - days[month1 - 1];
  result += day2 - day1;
  adjustYearByLeap(year1, month1);
  adjustYearByLeap(year2, month2);
  result += (year2 - year1) / 4;

  return result;
}


}

#endif  // NUMBER_OF_DAYS_BETWEEN_TWO_DATES_H_
