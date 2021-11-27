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

#include "product-of-array-except-self.h"

int main() {
  std::vector<int> v{-1, 1, 0, -3, 3};
  auto result = solution::productExceptSelf(v);

  return 0;
}
