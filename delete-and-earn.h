#ifndef DELETE_AND_EARN_H_
#define DELETE_AND_EARN_H_

#include <algorithm>
#include <unordered_map>
#include <vector>

namespace solution {

int deleteAndEarn(std::vector<int>& nums) {
  // iterative
  // Runtime: 8 ms, faster than 77.52% of C++ online submissions for Delete and Earn.
  // Memory Usage: 9.8 MB, less than 61.62% of C++ online submissions for Delete and Earn.
  //
  if (nums.size() == 1) return nums[0];

  std::unordered_map<int, int> m1;
  for (auto& n : nums) {
    m1[n] += n;
  }

  std::vector<std::pair<int, int>> v;
  for (auto& p : m1) {
    v.push_back({p.first, p.second});
  }
  
  std::sort(v.begin(), v.end());

  auto previous2{0}, previous{v.front().second};

  for (auto i{1}; i < v.size(); ++i) {
    auto value = v[i].first, temp = previous;
    
    if (value - v[i - 1].first == 1) {
      previous = std::max(previous, previous2 + v[i].second);
    } else {
      previous += v[i].second;
    }

    previous2 = temp;
  }

  return previous;
}


}

#endif  // !DELETE_AND_EARN_H_
