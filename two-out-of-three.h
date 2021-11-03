#ifndef TWO_OUT_OF_THREE_H_
#define TWO_OUT_OF_THREE_H_

#include <unordered_set>
#include <vector>

namespace solution {

std::vector<int> twoOutOfThree(std::vector<int>& nums1, std::vector<int>& nums2,
                               std::vector<int>& nums3) {
  // can use array to accumulate indices which value is greater then 2
  // Runtime: 24 ms, faster than 57.67% of C++ online submissions for Two Out of Three.
  // Memory Usage: 27.9 MB, less than 37.36% of C++ online submissions for Two Out of Three.
  //
  //std::unordered_set<int> s1(nums1.cbegin(), nums1.cend());
  //std::unordered_set<int> s2(nums2.cbegin(), nums2.cend());
  //std::unordered_set<int> s3(nums3.cbegin(), nums3.cend());

  //std::unordered_set<int> result;
  //for (auto& i : s2) {
  //  if (!s1.insert(i).second) {
  //    result.insert(i);
  //  }
  //}
  //for (auto& i : s3) {
  //  if (!s1.insert(i).second) {
  //    result.insert(i);
  //  }
  //}
  //return std::vector<int>{result.cbegin(), result.cend()};

  // Runtime: 12 ms, faster than 92.45% of C++ online submissions for Two Out of Three.
  // Memory Usage: 25.3 MB, less than 92.81% of C++ online submissions for Two Out of Three.
  bool cnt[3][101] = {};
  std::vector<int> res;
  for (auto n : nums1) cnt[0][n] = true;
  for (auto n : nums2) cnt[1][n] = true;
  for (auto n : nums3) cnt[2][n] = true;
  for (int i = 1; i <= 100; ++i)
    if (cnt[0][i] + cnt[1][i] + cnt[2][i] > 1) res.push_back(i);
  return res;
}

}  // namespace solution

#endif  // TWO_OUT_OF_THREE_H_
