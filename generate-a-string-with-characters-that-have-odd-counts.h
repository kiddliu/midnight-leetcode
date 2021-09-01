#ifndef GENERATE_A_STRING_WITH_CHARACTERS_THAT_HAVE_ODD_COUNTS_H_
#define GENERATE_A_STRING_WITH_CHARACTERS_THAT_HAVE_ODD_COUNTS_H_

#include <string>

namespace solution {

std::string generateTheString(int n) {
  // why
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Generate a String With Characters That Have Odd Counts.
  // Memory Usage: 6.4 MB, less than 26.23% of C++ online submissions for Generate a String With Characters That Have Odd Counts.
  //
  return n % 2 == 0 ? std::string(n - 1, 'a') + 'b' : std::string(n, 'a');
}

}


#endif  // GENERATE_A_STRING_WITH_CHARACTERS_THAT_HAVE_ODD_COUNTS_H_
