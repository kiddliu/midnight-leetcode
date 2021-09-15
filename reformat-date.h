#ifndef REFORMAT_DATE_H_
#define REFORMAT_DATE_H_

#include <string>
#include <unordered_map>

namespace solution {

std::string reformatDate(std::string date) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reformat Date.
  // Memory Usage: 6.2 MB, less than 20.86% of C++ online submissions for Reformat Date.
  //
  std::unordered_map<std::string, std::string> m{
      {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"},
      {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"},
      {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
  auto first{date.find(' ')}, last{date.rfind(' ')};
  auto year{date.substr(last + 1, 4)}, month{m[date.substr(first + 1, 3)]},
      day{date.size() == 13 ? date.substr(0, 2) : "0" + date.substr(0, 1)};

  return year + "-" + month + "-" + day;
}

}

#endif  // REFORMAT_DATE_H_
