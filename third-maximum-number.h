#ifndef THIRD_MAXIMUM_NUMBER_H_
#define THIRD_MAXIMUM_NUMBER_H_

#include <set>
#include <vector>

namespace solution {

int thirdMax(std::vector<int>& nums) {
  // naive with set, actually the size of set can limit to 3 and pick the head/tail for the result
  // Runtime: 24 ms, faster than 5.52% of C++ online submissions for Third Maximum Number.
  // Memory Usage: 10.6 MB, less than 22.25% of C++ online submissions for Third Maximum Number.
  //
  std::set<int, std::greater<int>> s{nums.cbegin(), nums.cend()};

  return s.size() < 3 ? *s.cbegin() : *(std::next(s.cbegin(), 2)) ;
}

}

#endif  // THIRD_MAXIMUM_NUMBER_H_
