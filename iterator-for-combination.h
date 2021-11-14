#ifndef ITERATOR_FOR_COMBINATION_H_
#define ITERATOR_FOR_COMBINATION_H_

#include <string>
#include <vector>

namespace solution {

// reset the keys!!
// Runtime: 7 ms, faster than 95.09% of C++ online submissions for Iterator for Combination.
// Memory Usage: 12.2 MB, less than 87.95% of C++ online submissions for Iterator for Combination.
//
class CombinationIterator {
 public:
  CombinationIterator(std::string characters, int combinationLength)
      : characters_{characters},
        indices_{std::vector<int>(combinationLength)},
        hasNext_{characters.size() != combinationLength} {
    for (auto i = 0; i < combinationLength; ++i) {
      indices_[i] = i;
    }
  }

  std::string next() {
    std::string s;
    if (!hasNext_) throw s;
    
    auto max_base{characters_.size() - indices_.size()};
    for (auto& i : indices_) {
      s.append(1, characters_[i]);
    }
    
    hasNext_ = false;
    for (int i = indices_.size() - 1; i >= 0; --i) {
      if (indices_[i] < max_base + i) {
        ++indices_[i];
        hasNext_ = true;
        if (i < indices_.size() - 1) {
          while (++i < indices_.size()) {
            indices_[i] = indices_[i - 1] + 1;
          }
        }
        break;
      }
    }
    return s;
  }

  bool hasNext() {
    return hasNext_;
  }

 private:
  std::string characters_;
  std::vector<int> indices_;
  bool hasNext_;
};

}  // namespace solution

#endif  // ITERATOR_FOR_COMBINATION_H_
