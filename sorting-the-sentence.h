#ifndef SORTING_THE_SENTENCE_H_
#define SORTING_THE_SENTENCE_H_

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

std::string sortSentence(std::string s) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sorting the Sentence.
  // Memory Usage: 6.3 MB, less than 75.28% of C++ online submissions for Sorting the Sentence.
  //
  std::vector<int> v;

  auto begin{0}, end{begin}, p{begin};
  while (begin < s.size()) {
    while (!std::isdigit(s[end])) ++end;

    p = end;
    auto num{0};
    while (std::isdigit(s[p])) {
      num = num * 10 + s[p++] - '0';
    }
    num <<= 16;
    num += begin << 8;
    num += end;
    v.push_back(num);
    
    begin = p + 1, end = begin;
  }

  std::sort(v.begin(), v.end());

  std::string result;
  for (const auto& i : v) {
    auto end = i & 0xff;
    auto begin = (i >> 8) & 0xff;
    result.append(s.substr(begin, end - begin));
    result.append(1, ' ');
  }
  return result.substr(0, result.size() - 1);
}

}

#endif  // SORTING_THE_SENTENCE_H_
