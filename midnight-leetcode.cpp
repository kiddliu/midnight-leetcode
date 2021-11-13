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

#include "daily-temperatures.h"

int main() {
  std::vector<int> v{73, 74, 75, 71, 69, 72, 76, 73};
  solution::dailyTemperatures(v);
}
