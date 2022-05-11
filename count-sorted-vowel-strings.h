#ifndef COUNT_SORTED_VOWEL_STRINGS_H_
#define COUNT_SORTED_VOWEL_STRINGS_H_

#include <array>
#include <numeric>

namespace solution {

int countVowelStrings(int n) {
  // with array...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count Sorted Vowel Strings.
  // Memory Usage: 6 MB, less than 58.60% of C++ online submissions for Count Sorted Vowel Strings.
  //
	std::array<int, 5> array{1,1,1,1,1};

	while (n--) {
    for (auto i{3}; i >= 0; --i) {
      array[i] += array[i + 1];
    }
  }

  return std::accumulate(array.cbegin(), array.cend(), 0);
}

}

#endif  // COUNT_SORTED_VOWEL_STRINGS_H_
