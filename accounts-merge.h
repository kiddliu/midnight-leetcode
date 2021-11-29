#ifndef ACCOUNTS_MERGE_H_
#define ACCOUNTS_MERGE_H_

#include <algorithm>
#include <iterator>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace solution {

std::vector<std::vector<std::string>> accountsMerge(
    std::vector<std::vector<std::string>>& accounts) {
  // merge with groups
  // Runtime: 176 ms, faster than 39.61% of C++ online submissions for Accounts Merge.
  // Memory Usage: 33 MB, less than 89.94% of C++ online submissions for Accounts Merge.
  //
  std::unordered_map<std::string, std::pair<int, std::unordered_map<std::string, int>>> container;

  for (auto& v : accounts) {
    if (container.count(v[0])) {
      auto& count = container[v[0]].first;
      auto& map = container[v[0]].second;

      std::unordered_set<int> groups;
      for (auto i = 1; i < v.size(); ++i) {
        if (map.count(v[i])) {
          groups.insert(map[v[i]]);
        }
      }
      if (groups.size() == 0) {
        ++count;

        for (auto i = 1; i < v.size(); ++i) {
          map[v[i]] = count;
        }
      } else {
        auto min = *std::min_element(groups.cbegin(), groups.cend());
        for (auto i = 1; i < v.size(); ++i) {
          map[v[i]] = min;
        }
        for (auto& p : map) {
          if (p.second != min && groups.count(p.second)) {
            p.second = min;
          }
        }
      }
    } else {
      std::unordered_map<std::string, int> map;
      for (auto i = 1; i < v.size(); ++i) {
        map[v[i]] = 1;
      }

      container.insert({v[0], {1, map}});
    }
  }

  std::vector<std::vector<std::string>> result;
  for (auto& p : container) {
    auto& name = p.first;
    auto& map = p.second.second;

    std::vector<std::vector<std::string>> partial(p.second.first);
    for (auto& p2 : map) {
      partial[p2.second - 1].push_back(p2.first);
    }
    for (auto& p : partial) {
      if (!p.empty()) {
        std::sort(p.begin(), p.end());
        p.insert(p.begin(), name);
        
        result.insert(result.end(), p);
      }
    }
  }
  return result;
}

}  // namespace solution

#endif  // ACCOUNTS_MERGE_H_
