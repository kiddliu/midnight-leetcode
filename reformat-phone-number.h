#ifndef REFORMAT_PHONE_NUMBER_H_
#define REFORMAT_PHONE_NUMBER_H_

#include <string>

namespace solution {

std::string reformatNumber(std::string number) {
  // thank god this is fast enough, regex_replace can do this with one line
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reformat Phone Number.
  // Memory Usage: 6 MB, less than 95.16% of C++ online submissions for Reformat Phone Number.
  //
  std::string result;
  for (const auto& c : number) {
    if (c != ' ' && c != '-') {
      result.append(1, c);
    }
  }

  int p = result.size(), offset{0};
  while (p > 4) {
    offset += 3;
    result.insert(offset++, 1, '-');
    p -= 3;
  }

  if (p == 4) {
    offset += 2;
    result.insert(offset++, 1, '-');
  }

  return result;
}

}

#endif  // !REFORMAT_PHONE_NUMBER_H_
