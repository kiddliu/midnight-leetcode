// midnight-leetcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "two-sum.h"
#include "reverse-integer.h"
#include "palindrome-number.h"
#include "roman-to-integer.h"
#include "longest-common-prefix.h"

int main() { 
  std::vector<std::string> v{"dog", "racecar", "car"};
  std::cout << std::boolalpha << solution::longestCommonPrefix(v);
}