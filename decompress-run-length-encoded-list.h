#ifndef DECOMPRESS_RUN_LENGTH_ENCODED_LIST_H_
#define DECOMPRESS_RUN_LENGTH_ENCODED_LIST_H_

#include <vector>

namespace solution {

std::vector<int> decompressRLElist(std::vector<int>& nums) {
  // why 2 while loops?
  // Runtime: 3 ms, faster than 87.25% of C++ online submissions for Decompress Run-Length Encoded List.
  // Memory Usage: 10.2 MB, less than 8.52% of C++ online submissions for Decompress Run-Length Encoded List.
  //
  std::vector<int> result;

  for (size_t i = 0; i < nums.size(); i += 2) {
    result.insert(result.end(), nums[i], nums[i + 1]);
  }

  return result;
}


}


#endif  // DECOMPRESS_RUN_LENGTH_ENCODED_LIST_H_
