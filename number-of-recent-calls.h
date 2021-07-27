#ifndef NUMBER_OF_RECENT_CALLS_H_
#define NUMBER_OF_RECENT_CALLS_H_

#include <queue>

namespace solution {


// i don't understand why it's a leetcode problem
// Runtime: 128 ms, faster than 86.49% of C++ online submissions for Number of Recent Calls.
// Memory Usage: 57.4 MB, less than 65.28% of C++ online submissions for Number of Recent Calls.
//
class RecentCounter {
 public:
  RecentCounter() {}

  int ping(int t) {
    d_.push(t);

    auto front = t - 3000;
    while (d_.front() < front) {
      d_.pop();
    }
    return d_.size();
  }

 private:
  std::queue<int> d_;
};

}

#endif  // NUMBER_OF_RECENT_CALLS_H_
