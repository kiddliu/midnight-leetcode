#ifndef REARRANGE_SPACES_BETWEEN_WORDS_H_
#define REARRANGE_SPACES_BETWEEN_WORDS_H_

#include <string>
#include <vector>

namespace solution {

std::string reorderSpaces(std::string text) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rearrange Spaces Between Words.
  // Memory Usage: 6.2 MB, less than 78.40% of C++ online submissions for Rearrange Spaces Between Words.
  //
  std::vector<int> v;
  auto count{0}, word{0};
  for (auto i = 0; i < text.size(); ++i) {
    if (static_cast<bool>(std::isalpha(static_cast<unsigned char>(text[i])))) {
      if (word == 0) {
        word = 1;
        v.push_back(i);
      }
    } else {
      ++count;
      if (word == 1) {
        word = 0;
        v.push_back(i);
      }
    }
  }
  if (v.size() % 2 == 1) v.push_back(v.size());

  int segment = (v.size() / 2) - 1, tail = segment == 0 ? count : count % segment;
  count = segment == 0 ? 0 : count / segment;
  std::string s;

  for (auto i = 0; i < v.size();) {
    s += text.substr(v[i], v[i + 1] - v[i]);
    i += 2;
    if (i != v.size()) s.insert(s.end(), count, ' ');
  }
  if (tail > 0) s.insert(s.end(), tail, ' ');

  return s;
}

}

#endif  // !REARRANGE_SPACES_BETWEEN_WORDS_H_
