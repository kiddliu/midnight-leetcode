// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "merge-sorted-array.h"


int main() {
  std::vector<int> v1{4, 0, 0, 0, 0, 0};
  std::vector<int> v2{1, 2, 3, 5, 6};
  /*std::cout << std::boolalpha <<*/ solution::merge(v1, 1, v2, 5);
}
