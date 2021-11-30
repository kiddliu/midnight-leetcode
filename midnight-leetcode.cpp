// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "node.h"
#include "tree-node.h"

#include "4sum.h"

int main() {
  std::vector<int>
      v{2,2,2,2,2};
  auto result = solution::fourSum(v, 8);

  return 0;
}
