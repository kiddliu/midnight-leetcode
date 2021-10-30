#ifndef MINIMUM_TIME_TO_TYPE_WORD_USING_SPECIAL_TYPEWRITER_H_
#define MINIMUM_TIME_TO_TYPE_WORD_USING_SPECIAL_TYPEWRITER_H_

#include <string>

namespace solution {

int minTimeToType(std::string word) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Time to Type Word Using Special Typewriter.
  // Memory Usage: 6 MB, less than 89.59% of C++ online submissions for Minimum Time to Type Word Using Special Typewriter.
  //
  auto result{0}, last{static_cast<int>('a')};

  for (auto& c : word) {
    if (c != last) {
      result += std::min((c - last + 26) % 26, (last - c + 26) % 26);
      last = c;
    }
    ++result;
  }
  return result;
}

}

#endif  // MINIMUM_TIME_TO_TYPE_WORD_USING_SPECIAL_TYPEWRITER_H_
