#ifndef SUM_OF_ALL_SUBSET_XOR_TOTALS_H_
#define SUM_OF_ALL_SUBSET_XOR_TOTALS_H_

#include <functional>
#include <numeric>
#include <vector>

namespace solution {

int subsetXORSum(std::vector<int>& nums) {
  // this is amazing, find out that all the bits show up nums.size() - 1 times
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of All Subset XOR Totals.
  // Memory Usage: 7.2 MB, less than 55.59% of C++ online submissions for Sum of All Subset XOR Totals.
  //
  return std::accumulate(nums.cbegin(), nums.cend(), 0, std::bit_or<int>())
         << (nums.size() - 1);
}

}

#endif  // SUM_OF_ALL_SUBSET_XOR_TOTALS_H_
