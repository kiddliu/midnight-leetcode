#ifndef DELETE_COLUMNS_TO_MAKE_SORTED_H_
#define DELETE_COLUMNS_TO_MAKE_SORTED_H_

#include <string>
#include <vector>

namespace solution {

int minDeletionSize(std::vector<std::string>& strs) {
  // direct
  // Runtime: 40 ms, faster than 82.88% of C++ online submissions for Delete Columns to Make Sorted.
  // Memory Usage: 12.2 MB, less than 72.37% of C++ online submissions for Delete Columns to Make Sorted.
  //
  auto result{0};
  for (size_t i = 0; i < strs[0].size(); ++i) {
    for (size_t j = 1; j < strs.size(); ++j) {
      if (strs[j][i] < strs[j - 1][i]) {
        ++result;
        break;
      }
    }
  }
  return result;
}

}

#endif  // DELETE_COLUMNS_TO_MAKE_SORTED_H_
