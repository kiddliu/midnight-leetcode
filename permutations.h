#ifndef PERMUTATIONS_H_
#define PERMUTATIONS_H_

#include <algorithm>
#include <array>
#include <vector>

namespace solution {

std::vector<std::vector<int>> permute(std::vector<int>& nums) {
  // since we've dealt with std::next_permutation...
  // it's the same for permutation ii
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Permutations.
  // Memory Usage: 7.6 MB, less than 78.37% of C++ online submissions for Permutations.
  //
  if (nums.size() == 1) return {nums};

  std::sort(nums.begin(), nums.end());
  std::vector<std::vector<int>> result;

  do {
    result.push_back(nums);
  } while (std::next_permutation(nums.begin(), nums.end()));

  return result;
}

}

#endif  // !PERMUTATIONS_H_
