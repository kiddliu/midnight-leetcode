#ifndef FIND_WORDS_THAT_CAN_BE_FORMED_BY_CHARACTERS_H_
#define FIND_WORDS_THAT_CAN_BE_FORMED_BY_CHARACTERS_H_

#include <array>
#include <string>
#include <vector>

namespace solution {

int countCharacters(std::vector<std::string>& words, std::string chars) {
  // tracking the char count
  // Runtime: 44 ms, faster than 92.51% of C++ online submissions for Find Words That Can Be Formed by Characters.
  // Memory Usage: 15.2 MB, less than 99.64% of C++ online submissions for Find Words That Can Be Formed by Characters.
  //
  std::array<int, 26> charArray = {0};
  for (const auto& c : chars) {
    ++charArray[c - 'a'];
  }

  auto result{0};
  for (const auto& word : words) {
    auto source{charArray};
    auto good{true};
    for (const auto& c : word) {
      if (source[c - 'a'] == 0) {
        good = false;
        break;
      } else {
        --source[c - 'a'];
      }
    }

    if (good) result += word.size();
  }
  return result;
}


}

#endif  // FIND_WORDS_THAT_CAN_BE_FORMED_BY_CHARACTERS_H_
