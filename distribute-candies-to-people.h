#ifndef DISTRIBUTE_CANDIES_TO_PEOPLE_H_
#define DISTRIBUTE_CANDIES_TO_PEOPLE_H_

#include <vector>

namespace solution {

std::vector<int> distributeCandies(int candies, int num_people) {
  // why should I care indices???
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Distribute Candies to People.
  // Memory Usage: 6.2 MB, less than 99.39% of C++ online submissions for Distribute Candies to People.
  //
  std::vector<int> v(num_people, 0);

  for (int i = 0; candies > 0; ++i) {
    auto pile = std::min(candies, i + 1);
    v[i % num_people] += pile, candies -= pile;
  }
  return v;
}


}

#endif  // DISTRIBUTE_CANDIES_TO_PEOPLE_H_
