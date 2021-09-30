#ifndef MAXIMUM_REPEATING_SUBSTRING_H_
#define MAXIMUM_REPEATING_SUBSTRING_H_

#include <string>

namespace solution {

int maxRepeating(std::string sequence, std::string word) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Repeating Substring.
  // Memory Usage: 6.4 MB, less than 15.75% of C++ online submissions for Maximum Repeating Substring.
  //
  auto max{0};
  std::string sub{word};
  while (sequence.find(sub) != std::string::npos) {
    ++max;
    sub += word;
  }
  return max;
}

}

#endif  // !MAXIMUM_REPEATING_SUBSTRING_H_
