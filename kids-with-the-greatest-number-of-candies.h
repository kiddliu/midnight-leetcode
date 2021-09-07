#ifndef KIDS_WITH_THE_GREATEST_NUMBER_OF_CANDIES_H_
#define KIDS_WITH_THE_GREATEST_NUMBER_OF_CANDIES_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Kids With the Greatest Number of Candies.
  // Memory Usage: 9 MB, less than 10.75% of C++ online submissions for Kids With the Greatest Number of Candies.
  //
  std::vector<bool> result;
  result.reserve(candies.size());

  auto max{0};

  for (size_t i = 0; i < candies.size(); ++i) {
    max = std::max(max, candies[i]);
  }

  for (size_t i = 0; i < candies.size(); ++i) {
    result.push_back(candies[i] + extraCandies >= max);
  }

  return result;
}

}

#endif  // KIDS_WITH_THE_GREATEST_NUMBER_OF_CANDIES_H_
