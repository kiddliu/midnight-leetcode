#ifndef GAS_STATION_H_
#define GAS_STATION_H_

#include <vector>

namespace solution {

int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
  // it should be an easy-level problem
  // Runtime: 44 ms, faster than 93.78% of C++ online submissions for Gas Station.
  // Memory Usage: 49.9 MB, less than 10.33% of C++ online submissions for Gas Station.
  //
  auto i{-1}, result{0}, balance{0}, local{-1};
  while (++i < gas.size()) {
    auto budget{gas[i] - cost[i]};
    if (budget >= 0) {
      if (local < 0) local = 0, result = i;
      local += budget;
    } else if (local >= 0) {
      local += budget;
      if (local < 0) balance += local;
    } else {
      balance += budget;
    }
  }
  return local + balance >= 0 ? result : -1;
}

}

#endif  // GAS_STATION_H_
