#ifndef REPEATED_DNA_SEQUENCES_H_
#define REPEATED_DNA_SEQUENCES_H_

#include <string>
#include <unordered_set>
#include <vector>

namespace solution {

std::vector<std::string> findRepeatedDnaSequences(std::string s) {
  // with set...
  // Runtime: 63 ms, faster than 87.65% of C++ online submissions for Repeated DNA Sequences.
  // Memory Usage: 19.4 MB, less than 82.56% of C++ online submissions for Repeated DNA Sequences.
  //
  std::unordered_set<std::string> bag, repeated;
  int size = s.size() - 9;

  for (auto i{0}; i < size; ++i) {
    auto sub{s.substr(i, 10)};
    if (bag.count(sub)) {
      repeated.insert(sub);
    } else {
      bag.insert(sub);
    }
  }
  return std::vector<std::string>(repeated.cbegin(), repeated.cend());
}

}

#endif  // !REPEATED_DNA_SEQUENCES_H_
