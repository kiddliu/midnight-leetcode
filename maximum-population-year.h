#ifndef MAXIMUM_POPULATION_YEAR_H_
#define MAXIMUM_POPULATION_YEAR_H_

#include <array>
#include <vector>

namespace solution {

int maximumPopulation(std::vector<std::vector<int>>& logs) {
  // straight forward
  // Runtime: 3 ms, faster than 84.80% of C++ online submissions for Maximum Population Year.
  // Memory Usage: 7.8 MB, less than 88.01% of C++ online submissions for Maximum Population Year.
  //
  std::array<int, 101> a{};

  auto count{0}, year{0};
  for (const auto& log : logs) {
    for (auto i = log[0]; i < log[1]; ++i) {
      auto offset = i - 1950;
      ++a[offset];
      if (a[offset] > count || a[offset] == count && i < year) {
        count = a[offset];
        year = i;
      }
    }
  }

  return year;
}


}

#endif  // MAXIMUM_POPULATION_YEAR_H_
