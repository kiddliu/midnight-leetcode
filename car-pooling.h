#ifndef CAR_POOLING_H_
#define CAR_POOLING_H_

#include <array>
#include <vector>

namespace solution {

bool carPooling(std::vector<std::vector<int>>& trips, int capacity) {
  // why it's a medium question?
  // Runtime: 7 ms, faster than 96.66% of C++ online submissions for Car Pooling.
  // Memory Usage: 9.8 MB, less than 91.12% of C++ online submissions for Car Pooling.
  //
  std::array<int, 1001> status{0};

  for (auto& trip : trips) {
    status[trip[1]] += trip[0];
    status[trip[2]] -= trip[0];
  }

  auto cap{0};
  for (auto& stop : status) {
    cap += stop;
    if (cap > capacity) return false;
  }

  return true;
}

}


#endif  // CAR_POOLING_H_
