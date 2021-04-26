#ifndef TWO_SUM_II_H
#define TWO_SUM_II_H

#include <map>
#include <vector>

namespace solution {

std::vector<int> twoSum(std::vector<int>& numbers, int target) {
  // Using maps
  // Runtime: 4 ms, faster than 89.07% of C++ online submissions for Two Sum II - Input array is sorted.
  // Memory Usage: 10.8 MB, less than 5.18% of C++ online submissions for Two Sum II - Input array is sorted.
  //
  //std::map<int, std::vector<size_t>> table{};
  //for (size_t i = 0; i < numbers.size(); ++i) {
  //  auto iter = table.find(numbers[i]);
  //  if (iter != table.end()) {
  //    table[numbers[i]].push_back(i + 1);
  //  } else {
  //    table.insert({numbers[i], std::vector<size_t>{i + 1}});
  //  }
  //}
  //  
  //for (auto& pair : table) {
  //  auto iter = table.find(target - pair.first);
  //  if (iter != table.end()) {
  //    if (pair.first == target - pair.first) {
  //      return std::vector<int>(pair.second.begin(), pair.second.end());
  //    }
  //    return std::vector<int>{static_cast<int>(pair.second[0] + 1),
  //                            static_cast<int>((*iter).second[0] + 1)};
  //  }
  //}

  std::vector<int> res;
  for (auto it = numbers.begin(); it < numbers.end(); ++it) {
    auto iter = find(it + 1, numbers.end(), target - *it);
    if (iter != numbers.end()) {
      res.push_back(it - numbers.begin() + 1);
      res.push_back(iter - numbers.begin() + 1);
      break;
    }
  }
  return res;
}

}

#endif  // TWO_SUM_II_H
