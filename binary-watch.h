#ifndef BINARY_WATCH_H_
#define BINARY_WATCH_H_

#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace solution {

std::vector<std::string> readBinaryWatch(int turnedOn) {
  // use bitset to count 1s, looping through all permutation seems much quicker and easy to understand
  // Runtime: 4 ms, faster than 15.77% of C++ online submissions for Binary Watch.
  // Memory Usage: 7.6 MB, less than 5.21% of C++ online submissions for Binary Watch.
  //
  std::vector<std::string> v;
  if (turnedOn > 8) return v;

  std::unordered_map<int, std::unordered_set<int>> m;
  m[0] = std::move(std::unordered_set<int>{0});
  for (int i = 0; i < turnedOn; ++i) {
    std::unordered_set<int> s;
    for (int j : m[i]) {
      int op = 1;
      while (op != 2048) {
        auto n = j | op;
        if (n != j) s.insert(j | op);
        op <<= 1;
      }
    }
    m.insert({i + 1, s});
  }

  for (const int& i : m[turnedOn]) {
    auto hour = i >> 6, minute = i & 63;
    if (hour < 12 && minute < 59) {
      std::string s;
      s.append(std::to_string(hour) + ":");
      if (minute < 10) {
        s.append("0");
      }
      s.append(std::to_string(minute));
      v.push_back(s);
    }
  }
  std::sort(v.begin(), v.end());
  return v;
}


}

#endif  // BINARY_WATCH_H_
