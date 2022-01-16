#ifndef MAXIMIZE_DISTANCE_TO_CLOSEST_PERSON_H_
#define MAXIMIZE_DISTANCE_TO_CLOSEST_PERSON_H_

#include <vector>

namespace solution {

int maxDistToClosest(std::vector<int>& seats) {
  // it should be an easy-level problem
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximize Distance to Closest Person.
  // Memory Usage: 16.9 MB, less than 93.10% of C++ online submissions for Maximize Distance to Closest Person.
  //
  auto last{-1}, result{0};

  for (int i{0}; i < seats.size(); ++i) {
    if (seats[i] == 1) {
      result = std::max(result, last == -1 ? i : (i - last) / 2);
      last = i;
    }
  }

  if (last != seats.size() - 1) {
    result = std::max<int>(result, seats.size() - 1 - last);
  }
  return result;
}

}

#endif  // !MAXIMIZE_DISTANCE_TO_CLOSEST_PERSON_H_
