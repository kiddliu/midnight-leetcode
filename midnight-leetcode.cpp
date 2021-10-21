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

#include "determine-whether-matrix-can-be-obtained-by-rotation.h"

int main() {
  std::vector<std::vector<int>> v1{{0, 1}, {1, 0}};
  std::vector<std::vector<int>> v2{{1, 0}, {0, 1}};
  solution::findRotation(v1, v2);
}
