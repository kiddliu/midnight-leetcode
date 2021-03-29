#ifndef ROMAN_TO_INTEGER_H_
#define ROMAN_TO_INTEGER_H_

#include <string>

namespace solution {

  int romanToInt(std::string s) { 
    // Brute force with 2 iterators
    // Runtime: 8 ms
    // Memory Usage : 6 MB
    // 
    auto result = 0;
    auto it1 = s.cbegin();
    auto it2 = s.cbegin();
    ++it2;

    while (it1 != s.cend()) {
      switch (*it1) { 
        case 'I':
          if (*it2 == 'V' || *it2 == 'X') {
            result -= 1;
          } else {
            result += 1;
          }
          break;
        case 'X':
          if (*it2 == 'L' || *it2 == 'C') {
            result -= 10;
          } else {
            result += 10;
          }
          break;
        case 'C':
          if (*it2 == 'D' || *it2 == 'M') {
            result -= 100;
          } else {
            result += 100;
          }
          break;
        case 'V':
          result += 5;
          break;
        case 'L':
          result += 50;
          break;
        case 'D':
          result += 500;
          break;
        case 'M':
          result += 1000;
          break;
        default:
          return 0;
      }

      ++it1;
      if (it2 != s.cend()) ++it2;
    }

    return result;
  }

}

#endif  // ROMAN_TO_INTEGER_H_
