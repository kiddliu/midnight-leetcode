#ifndef CHECK_IF_ALL_1S_ARE_AT_LEAST_LENGTH_K_PLACES_AWAY_H_
#define CHECK_IF_ALL_1S_ARE_AT_LEAST_LENGTH_K_PLACES_AWAY_H_

#include <vector>

namespace solution {

bool kLengthApart(std::vector<int>& nums, int k) {
  // why my solution is so slow even it's identical to the answer
  // Runtime: 56 ms, faster than 72.99% of C++ online submissions for Check If All 1's Are at Least Length K Places Away.
  // Memory Usage: 57.6 MB, less than 40.23% of C++ online submissions for Check If All 1's Are at Least Length K Places Away.
  //
  auto distance{INT_MIN};

  for (const auto& n : nums) {
    if (n == 1) {
      if (distance >= 0 && distance < k) return false;
      distance = 0;
    } else {
      ++distance;
    }
  }

  return true;
}

}


#endif  // CHECK_IF_ALL_1S_ARE_AT_LEAST_LENGTH_K_PLACES_AWAY_H_
