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

#include "toeplitz-matrix.h"

int main() {
  std::vector<std::vector<int>> v{{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}};
  solution::isToeplitzMatrix(v);
}
