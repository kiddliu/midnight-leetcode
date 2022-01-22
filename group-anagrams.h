#ifndef GROUP_ANAGRAMS_H_
#define GROUP_ANAGRAMS_H_

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
  // it should be an easy-level problem
  // Runtime: 35 ms, faster than 72.41% of C++ online submissions for Group Anagrams.
  // Memory Usage: 19.7 MB, less than 70.25% of C++ online submissions for Group Anagrams.
  //
  if (strs.size() == 1) return {strs};

  std::unordered_map<std::string, std::vector<std::string>> map;
  for (size_t i = 0; i < strs.size(); ++i) {
    auto sorted{strs[i]};
    std::sort(sorted.begin(), sorted.end());
    map[sorted].push_back(strs[i]);
  }

  std::vector<std::vector<std::string>> result;
  for (auto& p : map) {
    result.push_back(p.second);
  }
  return result;
}

}

#endif  // GROUP_ANAGRAMS_H_
