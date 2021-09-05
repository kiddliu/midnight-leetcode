#ifndef MINIMUM_VALUE_TO_GET_POSITIVE_STEP_BY_STEP_SUM_H_
#define MINIMUM_VALUE_TO_GET_POSITIVE_STEP_BY_STEP_SUM_H_

#include <vector>

namespace solution {

int minStartValue(std::vector<int>& nums) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Value to Get Positive Step by Step Sum.
  // Memory Usage: 7.4 MB, less than 20.27% of C++ online submissions for Minimum Value to Get Positive Step by Step Sum.
  //
  auto sum{0}, min{0};
  for (const auto& n : nums) {
    sum += n;
    min = std::min(min, sum);
  }

  return 1 - min;
}


}


#endif  // MINIMUM_VALUE_TO_GET_POSITIVE_STEP_BY_STEP_SUM_H_
