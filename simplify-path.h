#ifndef SIMPLIFY_PATH_H_
#define SIMPLIFY_PATH_H_

#include <deque>
#include <sstream>
#include <string>

namespace solution {

std::string simplifyPath(std::string path) {
  // using STL...
  // Runtime: 4 ms, faster than 90.25% of C++ online submissions for Simplify Path.
  // Memory Usage: 9.2 MB, less than 67.19% of C++ online submissions for Simplify Path.
  //
  std::string result, temp;
  std::deque<std::string> deque;
  std::stringstream stream(path);
  while (std::getline(stream, temp, '/')) {
    if (temp == "" or temp == ".") continue;
    if (temp == ".." and !deque.empty()) {
      deque.pop_back();
    } else if (temp != "..") {
      deque.push_back(temp);
    }
  }
  for (auto& s : deque) {
    result += "/" + s;
  }
  return result.empty() ? "/" : result;
}

}  // namespace solution

#endif  // SIMPLIFY_PATH_H_
