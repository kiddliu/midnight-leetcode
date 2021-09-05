#ifndef STRING_MATCHING_IN_AN_ARRAY_H_
#define STRING_MATCHING_IN_AN_ARRAY_H_

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

std::vector<std::string> stringMatching(std::vector<std::string>& words) {
  // straight forward
  // Runtime: 3 ms, faster than 92.89% of C++ online submissions for String Matching in an Array.
  // Memory Usage: 8.4 MB, less than 62.39% of C++ online submissions for String Matching in an Array.
  //
  std::sort(words.begin(), words.end(),
            [](const std::string& w1, const std::string& w2) {
              return w1.size() < w2.size();
            });

  std::vector<std::string> v;
  for (size_t i = 0; i < words.size(); ++i) {
    for (size_t j = i + 1; j < words.size(); ++j) {
      if (words[i].size() != words[j].size() &&
          words[j].find(words[i]) != std::string::npos) {
        v.push_back(words[i]);
        break;
      }
    }
  }

  return v;
}


}


#endif  // STRING_MATCHING_IN_AN_ARRAY_H_
