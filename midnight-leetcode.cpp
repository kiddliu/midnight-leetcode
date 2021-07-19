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

#include "walking-robot-simulation.h"

int main() {
  std::vector<int> command{-2, -1, 4, 7, 8};
  std::vector<std::vector<int>> obstacles{{1, 1},  {2, 1},   {4, 4},   {5, -5},
                                          {2, -3}, {-2, -3}, {-1, -3}, {-4, -1},
                                          {-4, 3}, {5, 1}};
  solution::robotSim(command, obstacles);
}
