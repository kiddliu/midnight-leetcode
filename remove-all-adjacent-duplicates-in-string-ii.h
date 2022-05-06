#ifndef REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_II_H_
#define REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_II_H_

#include <deque>
#include <string>

namespace solution {

std::string removeDuplicates(std::string s, int k) {
  // with deque
  // Runtime: 23 ms, faster than 72.43% of C++ online submissions for Remove All Adjacent Duplicates in String II.
  // Memory Usage: 10.1 MB, less than 70.45% of C++ online submissions for Remove All Adjacent Duplicates in String II.
  //
  std::deque<std::pair<char, int>> deque;

	for (auto& c : s) {
    if (deque.empty()) {
      deque.push_back({c, 1});
    } else if (deque.back().first == c) {
      if (++deque.back().second == k) deque.pop_back();
    } else {
      deque.push_back({c, 1});
    }
  }

  std::string result;

  for (auto& p : deque) {
    result.insert(result.cend(), p.second, p.first);
  }

	return result;
}

}

#endif  // !REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_II_H_
