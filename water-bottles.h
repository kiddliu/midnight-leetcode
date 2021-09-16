#ifndef WATER_BOTTLES_H_
#define WATER_BOTTLES_H_

namespace solution {

int numWaterBottles(int numBottles, int numExchange) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Water Bottles.
  // Memory Usage: 5.9 MB, less than 71.36% of C++ online submissions for Water Bottles.
  //
  auto result{numBottles};
  while (numBottles >= numExchange) {
    auto m = numBottles % numExchange;
    numBottles /= numExchange;
    result += numBottles + m;
  }
  return result;
}

}

#endif  // WATER_BOTTLES_H_
