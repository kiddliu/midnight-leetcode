#ifndef NUMBER_OF_SEGMENTS_IN_A_STRING_H_
#define NUMBER_OF_SEGMENTS_IN_A_STRING_H_

#include <regex>
#include <string>

namespace solution {

int countSegments(std::string s) {
  // naive, with regex
  // Runtime: 16 ms, faster than 100.00% of C++ online submissions for Number of Segments in a String.
  // Memory Usage: 7.9 MB, less than 24.41% of C++ online submissions for Number of Segments in a String.
  //
  std::regex regex{"(\\S+)"};
  std::sregex_token_iterator it{s.begin(), s.end(), regex};
  return std::vector<std::string>{it, {}}.size();
}

}

#endif  // NUMBER_OF_SEGMENTS_IN_A_STRING_H_
