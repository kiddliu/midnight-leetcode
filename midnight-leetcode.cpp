// midnight-leetcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "remove-duplicates-from-sorted-array.h"

int main() { 
  std::vector<int> nums {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  std::cout << std::boolalpha << solution::removeDuplicates(nums);
}
