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

#include "find-if-path-exists-in-graph.h"

int main() {
  std::vector<std::vector<int>> v{{0, 1}, {0, 2}, {3, 5}, {5, 4}, {4, 3}};
  solution::validPath(6, v, 0, 5); 
}
