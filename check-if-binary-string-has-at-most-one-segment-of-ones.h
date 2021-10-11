#ifndef CHECK_IF_BINARY_STRING_HAS_AT_MOST_ONE_SEGMENT_OF_ONES_H_
#define CHECK_IF_BINARY_STRING_HAS_AT_MOST_ONE_SEGMENT_OF_ONES_H_

#include <string>

namespace solution {

bool checkOnesSegment(std::string s) {
  // since there's no leading 0s, find 01 means there's another chunk of 1s
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if Binary String Has at Most One Segment of Ones.
  // Memory Usage: 6.2 MB, less than 34.53% of C++ online submissions for Check if Binary String Has at Most One Segment of Ones.
  //
  return s.find("01") == std::string::npos;
}

}

#endif  // !CHECK_IF_BINARY_STRING_HAS_AT_MOST_ONE_SEGMENT_OF_ONES_H_
