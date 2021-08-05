#ifndef PARTITION_ARRAY_INTO_THREE_PARTS_WITH_EQUAL_SUM_H_
#define PARTITION_ARRAY_INTO_THREE_PARTS_WITH_EQUAL_SUM_H_

#include <numeric>
#include <vector>

namespace solution {

bool canThreePartsEqualSum(std::vector<int>& arr) {
  // again, i cannot figure out the edge cases
  // Runtime: 44 ms, faster than 76.52% of C++ online submissions for Partition Array Into Three Parts With Equal Sum.
  // Memory Usage: 32.6 MB, less than 58.03% of C++ online submissions for Partition Array Into Three Parts With Equal Sum.
  //
  auto total = std::accumulate(arr.cbegin(), arr.cend(), 0);
  if (total % 3 != 0) return false;
  total /= 3;

  auto p{1}, sum{arr[0]};
  while (p < arr.size() && sum != total) {
    sum += arr[p++];
  }
  if (p == arr.size()) return false;
  
  auto front{p - 1};
  p = arr.size() - 2, sum = arr[arr.size() - 1];
  while (p > front && sum != total) {
    sum += arr[p--];
  }
  return p != front;
}


}

#endif  // PARTITION_ARRAY_INTO_THREE_PARTS_WITH_EQUAL_SUM_H_
