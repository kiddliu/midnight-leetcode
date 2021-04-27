#ifndef EXCEL_SHEET_COLUMN_TITLE_H_
#define EXCEL_SHEET_COLUMN_TITLE_H_

#include <string>

namespace solution {

std::string convertToTitle(int columnNumber) {
  // Base 26, with Z represent 26 since no 0 defined
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Excel Sheet Column Title.
  // Memory Usage: 5.9 MB, less than 60.27% of C++ online submissions for Excel Sheet Column Title.
  // 
  std::string result{};
  while (columnNumber >= 1) {
    auto r = columnNumber % 26;
    auto c = static_cast<char>((r == 0 ? 26 : r) + 'A');
    result.insert(0, 1, c);
    columnNumber /= 26;
    if (r == 0) columnNumber -= 1;
  }
  return result;
}

}

#endif  // EXCEL_SHEET_COLUMN_TITLE_H_
