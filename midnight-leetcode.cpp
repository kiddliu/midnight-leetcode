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

#include "shortest-completing-word.h"

int main() {
  std::vector<std::string> v{"step", "steps", "stripe", "stepple"};
  solution::shortestCompletingWord("1s3 PSt", v);
}
