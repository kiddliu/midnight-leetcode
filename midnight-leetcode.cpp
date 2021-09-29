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

#include "design-an-ordered-stream.h"

int main() {
  //std::vector<int> v{10, 5, 7, 7, 3, 2, 10, 3, 6, 9, 1, 6};
  //std::vector<std::vector<int>> v2{{78}, {4, 64}, {91}};
  //solution::decrypt(v, -4);

  OrderedStream* obj = new OrderedStream(5);
  std::vector<std::string> param_1 = obj->insert(3, "ccccc");
  std::vector<std::string> param_2 = obj->insert(1, "aaaaa");
  std::vector<std::string> param_3 = obj->insert(2, "bbbbb");
  std::vector<std::string> param_4 = obj->insert(5, "eeeee");
  std::vector<std::string> param_5 = obj->insert(4, "ddddd");
}
