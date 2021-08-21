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

#include "cells-with-odd-values-in-a-matrix.h"

int main() {
  std::vector<std::vector<int>> v{{0, 1}, {1, 1}};
  solution::oddCells(2, 3, v);
}
