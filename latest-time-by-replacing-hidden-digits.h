#ifndef LATEST_TIME_BY_REPLACING_HIDDEN_DIGITS_H_
#define LATEST_TIME_BY_REPLACING_HIDDEN_DIGITS_H_

#include <string>

namespace solution {

std::string maximumTime(std::string time) {
  // time to take the medicine
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Latest Time by Replacing Hidden Digits.
  // Memory Usage: 5.8 MB, less than 65.87% of C++ online submissions for Latest Time by Replacing Hidden Digits.
  //
  time[0] = time[0] != '?'                       ? time[0]
            : (time[1] == '?' || time[1] <= '3') ? '2'
                                                 : '1';
  time[1] = time[1] != '?' ? time[1] : time[0] == '2' ? '3' : '9';
  time[3] = time[3] != '?' ? time[3] : '5';
  time[4] = time[4] != '?' ? time[4] : '9';
  return time;
}

}

#endif  // !LATEST_TIME_BY_REPLACING_HIDDEN_DIGITS_H_
