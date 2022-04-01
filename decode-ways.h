#ifndef DECODE_WAYS_H_
#define DECODE_WAYS_H_

#include <string>
#include <unordered_map>

namespace solution {

int numDecodings(std::string& s, int offset,
                 std::unordered_map<int, int>& memo) {
  if (offset >= s.size() || s[offset] == '0') return 0;
  if (offset == s.size() - 1) return 1;

  auto result{0};

  if (memo.count(offset + 1) == 0)
    memo[offset + 1] = numDecodings(s, offset + 1, memo);
  result += memo[offset + 1];

	if (s[offset] == '1' ||
      s[offset] == '2' && s[offset + 1] < '7') {
    if (offset == s.size() - 2) {
            ++result;
    } else {
      if (memo.count(offset + 2) == 0)
        memo[offset + 2] = numDecodings(s, offset + 2, memo);
      result += memo[offset + 2];
    }
  }

	return result;
}

int numDecodings(std::string s) {
  // classic DP...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Decode Ways.
  // Memory Usage: 6.7 MB, less than 23.66% of C++ online submissions for Decode Ways.
  //
  std::unordered_map<int, int> memo;
	return numDecodings(s, 0, memo);
}

}

#endif  // DECODE_WAYS_H_
