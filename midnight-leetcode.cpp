// midnight-leetcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "remove-element.h"

int main() { 
  std::vector<int> nums {3, 3};
  std::cout << std::boolalpha << solution::removeElement(nums, 3);
}
