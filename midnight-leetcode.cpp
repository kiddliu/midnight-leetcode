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

#include "n-ary-tree-preorder-traversal.h"

int main() {
  auto n = new Node(1, std::vector<Node*>{new Node(3, std::vector<Node*>(new Node(5), new Node(6))), new Node(2), new Node(4)});
  solution::preorder(n);
}
