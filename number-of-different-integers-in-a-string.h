#ifndef NUMBER_OF_DIFFERENT_INTEGERS_IN_A_STRING_H_
#define NUMBER_OF_DIFFERENT_INTEGERS_IN_A_STRING_H_

#include <string>
#include <unordered_set>
#include <vector>

namespace solution {

int numDifferentIntegers(std::string word) {
  // with unordered_set
  // Runtime: 4 ms, faster than 57.42% of C++ online submissions for Number of Different Integers in a String.
  // Memory Usage: 6.4 MB, less than 99.61% of C++ online submissions for Number of Different Integers in a String.
  // 
  std::unordered_set<std::string> s;
  auto offset{0};
  while (offset != -1) {
    auto first = word.find_first_of("0123456789", offset);
    if (first == std::string::npos) break;

    offset = word.find_first_of("abcdefghijklmnopqrstuvwxyz", first);
    if (offset == std::string::npos) offset = word.size();
    auto number = word.substr(first, offset - first);
    s.insert(number.erase(0, number.find_first_not_of('0')));
  }

  return s.size();
}

}

#endif  // !NUMBER_OF_DIFFERENT_INTEGERS_IN_A_STRING_H_
