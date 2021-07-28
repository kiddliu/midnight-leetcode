#ifndef REORDER_DATA_IN_LOG_FILES_H_
#define REORDER_DATA_IN_LOG_FILES_H_

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

std::vector<std::string> reorderLogFiles(std::vector<std::string>& logs) {
  // direct
  // Runtime: 8 ms, faster than 93.02% of C++ online submissions for Reorder Data in Log Files.
  // Memory Usage: 10 MB, less than 97.93% of C++ online submissions for Reorder Data in Log Files.
  //
  std::vector<std::string> v;
  auto count{0ul};
  for (const auto& log : logs) {
    if (std::isdigit(log[log.find(' ') + 1])) {
      ++count;
      v.push_back(log);
    } else {
      v.insert(v.begin(), log);
    }
  }
  std::sort(v.begin(), v.end() - count, [](const std::string& a, const std::string& b) { 
    return a.compare(a.find(' ') + 1, a.size(), b, b.find(' ') + 1) < 0;
  });
  return v;
}

}

#endif  // REORDER_DATA_IN_LOG_FILES_H_
