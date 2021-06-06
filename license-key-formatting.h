#ifndef LICENSE_KEY_FORMATTING_H_
#define LICENSE_KEY_FORMATTING_H_

#include <algorithm>
#include <cctype>
#include <string>

namespace solution {

std::string licenseKeyFormatting(std::string s, int k) {
  // naive, should respect the fact that the result from tail every 4 chars input a dash
  // Runtime: 412 ms, faster than 9.03% of C++ online submissions for License Key Formatting.
  // Memory Usage: 8.6 MB, less than 23.10% of C++ online submissions for License Key Formatting.
  //
  std::string result;

  // https://stackoverflow.com/a/7132065/1937578
  std::transform(s.begin(), s.end(), s.begin(), (int (*)(int))std::toupper);
  s.erase(std::remove(s.begin(), s.end(), '-'), s.end());
  auto d = s.size() % k;
  auto first = d == 0 ? "" : s.substr(0, d), second = d == 0 ? s : s.substr(d);

  auto p = d == 0 ? second.begin() + k : second.begin();
  while (p != second.end() && p + k <= second.end()) {
    p = second.insert(p, '-');
    p += k + 1;
  }

  return first + second;
}

}

#endif  // LICENSE_KEY_FORMATTING_H_
