#ifndef PALINDROME_NUMBER_H_
#define PALINDROME_NUMBER_H_

namespace solution {

  bool isPalindrome(int x) {
    // Runtime: 8 ms, faster than 75.60% of C++ online submissions for Palindrome Number.
    // Memory Usage: 5.8 MB, less than 87.70% of C++ online submissions for Palindrome Number.
    //
    if (x < 0) return false;
    if (x < 10) return true;
    if (x % 10 == 0) return false;

    int reversed = 0;
    while (x > reversed) {
      reversed *= 10;
      reversed += x % 10;

      x /= 10;
      if (x == reversed || x / 10 == reversed) return true;
    }

    return false;
  }

}

#endif  // PALINDROME_NUMBER_H_
