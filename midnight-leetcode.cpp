// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "tree-node.h"

#include "reshape-the-matrix.h"

int main() {
  std::vector<std::vector<int>> v{{1, 2}, {3, 4}};
  solution::matrixReshape(v, 1, 4);
}
