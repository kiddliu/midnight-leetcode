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

#include "number-of-rectangles-that-can-form-the-largest-square.h"

int main() {
  std::vector<std::vector<int>> v{{5, 8}, { 3, 9 }, { 5, 12 }, { 16, 5 }};
  solution::countGoodRectangles(v);
}
