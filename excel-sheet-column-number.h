#ifndef EXCEL_SHEET_COLUMN_NUMBER_H_
#define EXCEL_SHEET_COLUMN_NUMBER_H_

#include <cmath>
#include <string>

namespace solution {

int titleToNumber(std::string columnTitle) {
  // Brute force
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Excel Sheet Column Number.
  // Memory Usage: 6.2 MB, less than 15.40% of C++ online submissions for Excel Sheet Column Number.
  //
  auto result{0};
  auto power = columnTitle.size();

  for (auto& c : columnTitle) {
    result += (c - 64) * std::pow(26, --power);
  }

  return result;
}

}

#endif  // EXCEL_SHEET_COLUMN_NUMBER_H_
