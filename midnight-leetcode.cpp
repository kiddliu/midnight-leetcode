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

#include "design-hashset.h"

int main() {
  using namespace solution;

  MyHashSet* myHashSet = new MyHashSet();
  myHashSet->add(1);       // set = [1]
  myHashSet->add(2);       // set = [1, 2]
  myHashSet->contains(1);  // return True
  myHashSet->contains(3);  // return False, (not found)
  myHashSet->add(2);       // set = [1, 2]
  myHashSet->contains(2);  // return True
  myHashSet->remove(2);    // set = [1]
  myHashSet->contains(2);  // return False, (already removed)
}
