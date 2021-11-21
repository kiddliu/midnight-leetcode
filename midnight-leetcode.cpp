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

#include "construct-binary-tree-from-inorder-and-postorder-traversal.h"

int main() {
  std::vector<int> in{4,  10, 12, 15, 18, 22, 24, 25,
                      31, 35, 44, 50, 66, 70, 90};
  std::vector<int> post{4,  12, 10, 18, 24, 22, 15, 31,
                        44, 35, 66, 90, 70, 50, 25};
  auto result = solution::buildTree(in, post);

  return 0;
}
