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

#include "the-k-weakest-rows-in-a-matrix.h"

int main() {
  std::vector<std::vector<int>> v{{1, 1, 0, 0, 0},
                                  {1, 1, 1, 1, 0},
                                  {1, 0, 0, 0, 0},
                                  {1, 1, 0, 0, 0},
                                  {1, 1, 1, 1, 1}};
  solution::kWeakestRows(v, 3);
}
