#ifndef SUMMARY_RANGES_H_
#define SUMMARY_RANGES_H_

#include <string>
#include <vector>

namespace solution {

std::vector<std::string> summaryRanges(std::vector<int>& nums) {
  // brute force, should use 2 iterators
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Summary Ranges.
  // Memory Usage: 7 MB, less than 7.92% of C++ online submissions for Summary Ranges.
  //
  std::vector<std::string> result{};
  if (nums.empty()) return result;
  if (nums.size() == 1) {
    result.push_back(std::to_string(nums[0]));
    return result;
  }

  auto current = nums.cbegin(), end = nums.cend();
  std::string s{};
  auto last{0};
  while (current != end) {
    if (s.empty()) {
      last = *current;
      s = std::move(std::to_string(last));
    } else if (last + 1 != *current) {
      if (std::stoi(s) != last) {
        s.append("->" + std::to_string(last));
      }
      result.push_back(s);
      last = *current;
      s = std::move(std::to_string(last));
    } else {
      last = *current;
    }
    current++;
  }
  
  if (!s.empty()) {
    if (std::stoi(s) != last) {
      s.append("->" + std::to_string(last));
    }    
    result.push_back(s);
  }

  return result;
}

}


#endif  // SUMMARY_RANGES_H_
