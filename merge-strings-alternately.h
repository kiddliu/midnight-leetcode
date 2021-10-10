#ifndef MERGE_STRINGS_ALTERNATELY_H_
#define MERGE_STRINGS_ALTERNATELY_H_

#include <string>

namespace solution {

std::string mergeAlternately(std::string word1, std::string word2) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Strings Alternately.
  // Memory Usage: 6.3 MB, less than 82.11% of C++ online submissions for Merge Strings Alternately.
  //
  auto& shorter = word1.size() < word2.size() ? word1 : word2;
  auto& longer = word1 == shorter ? word2 : word1;
  std::string result;

  for (auto i = 0; i < shorter.size(); ++i) {
    result.push_back(word1[i]);
    result.push_back(word2[i]);
  }

  result.append(longer.substr(shorter.size()));

  return result;
}

}

#endif  // !MERGE_STRINGS_ALTERNATELY_H_
