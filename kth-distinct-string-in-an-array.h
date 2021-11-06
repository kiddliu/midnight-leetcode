#ifndef KTH_DISTINCT_STRING_IN_AN_ARRAY_H_
#define KTH_DISTINCT_STRING_IN_AN_ARRAY_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::string kthDistinct(std::vector<std::string>& arr, int k) {
  // straight forward
  // Runtime: 16 ms, faster than 92.85% of C++ online submissions for Kth Distinct String in an Array.
  // Memory Usage: 14.7 MB, less than 26.07% of C++ online submissions for Kth Distinct String in an Array.
  //
  std::unordered_map<std::string, int> freq;
  for (auto& s : arr) {
    ++freq[s];
  }

  for (auto& s : arr) {
    if (freq[s] == 1 && k-- == 1) {
      return s;
    }
  }

  return "";
}

}


#endif  // KTH_DISTINCT_STRING_IN_AN_ARRAY_H_
