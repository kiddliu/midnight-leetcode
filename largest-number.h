#ifndef LARGEST_NUMBER_H_
#define LARGEST_NUMBER_H_

#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

namespace solution {

std::string largestNumber(std::vector<int>& nums) {
  // damn...I'm smart
  // Runtime: 4 ms, faster than 95.36% of C++ online submissions for Largest Number.
  // Memory Usage: 11.4 MB, less than 45.48% of C++ online submissions for Largest Number.
  //
  std::vector<std::string> strings;
  std::transform(nums.cbegin(), nums.cend(), std::back_inserter(strings),
                 [](auto& source) { return std::to_string(source); });

  std::sort(strings.begin(), strings.end(), [](auto& first, auto& second) {
    return first + second > second + first;
  });

  std::string result;
  for (auto& s : strings) {
    result += s;
  }
  
  while (result.size() > 1 && result.front() == '0') {
    result.erase(0, 1);
  }

  return result;
}

}

#endif  // !LARGEST_NUMBER_H_
