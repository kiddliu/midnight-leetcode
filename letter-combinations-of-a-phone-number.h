#ifndef LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_
#define LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<std::string> letterCombinations(std::string digits) {
  // why it's a medium problem
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.
  // Memory Usage: 6.8 MB, less than 13.90% of C++ online submissions for Letter Combinations of a Phone Number.
  //
  std::unordered_map<char, std::vector<std::string>> map{
      {
          '2',
          {"a", "b", "c"},
      },
      {
          '3',
          {"d", "e", "f"},
      },
      {
          '4',
          {"g", "h", "i"},
      },
      {
          '5',
          {"j", "k", "l"},
      },
      {
          '6',
          {"m", "n", "o"},
      },
      {
          '7',
          {"p", "q", "r", "s"},
      },
      {
          '8',
          {"t", "u", "v"},
      },
      {

          '9',
          {"w", "x", "y", "z"},
      }};

  std::vector<std::string> result{map[digits[0]]};

  for (auto i = 1; i < digits.size(); ++i) {
    std::vector<std::string> v;
    for (auto& s : result) {
      for (auto& c : map[digits[i]]) {
        v.push_back(s + c);
      }
    }
    result = std::move(v);
  }

  return result;
}

}  // namespace solution

#endif  // LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H_
