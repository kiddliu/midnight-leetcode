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

#include "interval-list-intersections.h"

int main() {
  std::vector<std::vector<int>> first{
      {0, 2}, { 5, 10 }, { 13, 23 }, { 24, 25 }};
  std::vector<std::vector<int>> second{
      {1, 5}, { 8, 12 }, { 15, 24 }, { 25, 26 }};
  auto result = solution::intervalIntersection(first, second);

  return 0;
}
