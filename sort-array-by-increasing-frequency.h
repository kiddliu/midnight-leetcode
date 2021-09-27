#ifndef SORT_ARRAY_BY_INCREASING_FREQUENCY_H_
#define SORT_ARRAY_BY_INCREASING_FREQUENCY_H_

#include <algorithm>
#include <array>
#include <map>
#include <vector>

namespace solution {

std::vector<int> frequencySort(std::vector<int>& nums) {
  // construct the new vector
  // Runtime: 8 ms, faster than 71.63% of C++ online submissions for Sort Array by Increasing Frequency.
  // Memory Usage: 11.3 MB, less than 67.19% of C++ online submissions for Sort Array by Increasing Frequency.
  //
  std::array<int, 201> a{};
  for (const auto& n : nums) {
    ++a[n + 100];
  }
  std::map<int, std::vector<int>> freq;
  for (auto i = 0; i < a.size(); ++i) {
    if (a[i] != 0) {
      freq[a[i]].push_back(i - 100);
    }
  }

  std::vector<int> result;
  for (const auto& p : freq) {
    std::sort(p.second.begin(), p.second.end(), std::greater<int>());
    for (const auto& n : p.second) {
      result.insert(result.end(), p.first, n);
    }
  }
  return result;
}

}

#endif  // !SORT_ARRAY_BY_INCREASING_FREQUENCY_H_
