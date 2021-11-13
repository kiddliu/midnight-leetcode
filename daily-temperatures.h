#ifndef DAILY_TEMPERATURES_H_
#define DAILY_TEMPERATURES_H_

#include <stack>
#include <vector>

namespace solution {

std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
  // with stack
  // Runtime: 160 ms, faster than 48.97% of C++ online submissions for Daily Temperatures.
  // Memory Usage: 88.9 MB, less than 38.42% of C++ online submissions for Daily Temperatures.
  //
  std::vector<int> result(temperatures.size());

  std::stack<int> s;
  s.push(0);
  for (auto i = 1; i < temperatures.size(); ++i) {
    while (s.size() > 0 && temperatures[i] > temperatures[s.top()]) {
      result[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }

  return result;
}

}  // namespace solution

#endif  // DAILY_TEMPERATURES_H_
