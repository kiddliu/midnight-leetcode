#ifndef DECODE_XORED_ARRAY_H_
#define DECODE_XORED_ARRAY_H_

#include <vector>

namespace solution {

std::vector<int> decode(std::vector<int>& encoded, int first) {
  // straight forward
  // Runtime: 52 ms, faster than 12.52% of C++ online submissions for Decode XORed Array.
  // Memory Usage: 26.1 MB, less than 29.96% of C++ online submissions for Decode XORed Array.
  //
  std::vector<int> v = {first};

  for (auto i = 0; i < encoded.size(); ++i) {
    v.push_back(first ^= encoded[i]);
  }

  return v;
}

}

#endif  // !DECODE_XORED_ARRAY_H_
