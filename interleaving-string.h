#ifndef INTERLEAVING_STRING_H_
#define INTERLEAVING_STRING_H_

#include <string>
#include <vector>

namespace solution {

bool isInterleave(std::string s1, std::string s2, std::string s3) {
  // optimized DP...
  // Runtime: 4 ms, faster than 73.09% of C++ online submissions for Interleaving String.
  // Memory Usage: 6.7 MB, less than 55.90% of C++ online submissions for Interleaving String.
  //
  if (s3.length() != s1.length() + s2.length()) return false;

  std::vector<std::vector<bool>> v(s2.size() + 1,
                                   std::vector<bool>(s1.size() + 1));

  for (int i = 0; i < s1.length() + 1; i++)
    for (int j = 0; j < s2.length() + 1; j++) {
      if (i == 0 && j == 0)
        v[i][j] = true;
      else if (i == 0)
        v[i][j] = (v[i][j - 1] && s2[j - 1] == s3[i + j - 1]);
      else if (j == 0)
        v[i][j] = (v[i - 1][j] && s1[i - 1] == s3[i + j - 1]);
      else
        v[i][j] = (v[i - 1][j] && s1[i - 1] == s3[i + j - 1]) ||
                  (v[i][j - 1] && s2[j - 1] == s3[i + j - 1]);
    }

  return v[s1.length()][s2.length()];
}

}  // namespace solution

#endif  // INTERLEAVING_STRING_H_
