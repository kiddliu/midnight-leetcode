#ifndef PARTITIONING_INTO_MINIMUM_NUMBER_OF_DECI_BINARY_NUMBERS_H_
#define PARTITIONING_INTO_MINIMUM_NUMBER_OF_DECI_BINARY_NUMBERS_H_

#include <algorithm>
#include <string>

namespace solution {

int minPartitions(std::string n) {
  // with only 0 and 1, then for providing 1 for the max digit, and 0 for else case
  // Runtime: 34 ms, faster than 78.70% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
  // Memory Usage: 13.7 MB, less than 17.61% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
  //
  return *std::max_element(n.cbegin(), n.cend()) - '0';
}

}  // namespace solution

#endif  // !PARTITIONING_INTO_MINIMUM_NUMBER_OF_DECI_BINARY_NUMBERS_H_
