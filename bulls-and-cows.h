#ifndef BULLS_AND_COWS_H_
#define BULLS_AND_COWS_H_

#include <string>
#include <vector>

namespace solution {

std::string getHint(std::string secret, std::string guess) {
  // too much memory
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Bulls and Cows.
  // Memory Usage: 6.4 MB, less than 99.69% of C++ online submissions for Bulls and Cows.
  //
  int size = secret.size(), a{0}, b{0};
  std::vector<int> v1(10, 0), v2(10, 0);

  for (auto i{0}; i < size; ++i) {
    if (secret[i] == guess[i]) {
      ++a;
    } else {
      ++v1[secret[i] - '0'], ++v1[guess[i] - '0'];
    }
  }

  for (auto i{0}; i < 10; ++i) {
    b += std::min(v1[i], v2[i]);
  }

  std::string result;
  result += std::to_string(a);
  result.push_back('A');
  result += std::to_string(b);
  result.push_back('B');

  return result;
}

}

#endif  // !BULLS_AND_COWS_H_
