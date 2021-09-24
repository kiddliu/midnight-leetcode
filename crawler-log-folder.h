#ifndef CRAWLER_LOG_FOLDER_H_
#define CRAWLER_LOG_FOLDER_H_

#include <string>
#include <vector>

namespace solution {

int minOperations(std::vector<std::string>& logs) {
  // straight forward
  // Runtime: 4 ms, faster than 90.69% of C++ online submissions for Crawler Log Folder.
  // Memory Usage: 10.5 MB, less than 64.88% of C++ online submissions for Crawler Log Folder.
  //
  auto level{0};
  for (const auto& log : logs) {
    if (log == "../") {
      if (level > 0) --level;
    } else if (log != "./") {
      ++level;
    }
  }

  return level;
}

}

#endif  // !CRAWLER_LOG_FOLDER_H_
