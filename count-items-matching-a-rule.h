#ifndef COUNT_ITEMS_MATCHING_A_RULE_H_
#define COUNT_ITEMS_MATCHING_A_RULE_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

int countMatches(std::vector<std::vector<std::string>>& items, std::string ruleKey, std::string ruleValue) {
  // can use count_if instead
  // Runtime: 76 ms, faster than 57.39% of C++ online submissions for Count Items Matching a Rule.
  // Memory Usage: 31.3 MB, less than 15.74% of C++ online submissions for Count Items Matching a Rule.
  //
  std::unordered_map<std::string, int> types, colors, names;
  for (const auto& item : items) {
    ++types[item[0]];
    ++colors[item[1]];
    ++names[item[2]];
  }
  
  if (ruleKey == "type") {
    return types[ruleValue];
  }
  if (ruleKey == "color") {
    return colors[ruleValue];
  }
  if (ruleKey == "name") {
    return names[ruleValue];
  }
  throw 0;
}

}

#endif  // !COUNT_ITEMS_MATCHING_A_RULE_H_
