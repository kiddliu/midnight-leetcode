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

#include "maximum-population-year.h"

int main() {
  std::vector<std::vector<int>> v{{1950, 1961}, {1960, 1971}, {1970, 1981}};
  solution::maximumPopulation(v);
}
