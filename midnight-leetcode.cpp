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

#include "design-hashmap.h"

int main() {
  using namespace solution;

  MyHashMap* myHashMap = new MyHashMap(1);
  myHashMap->put(57, 87);
  myHashMap->put(66, 5);
  myHashMap->remove(66);
  myHashMap->put(66, 42);
  assert(myHashMap->get(1) == -1);
  myHashMap->put(6, 39);
  myHashMap->put(1, 23);
  myHashMap->put(55, 30);
  myHashMap->put(51, 97);
  assert(myHashMap->get(57) == 87);
  myHashMap->put(14, 3);
  myHashMap->put(95, 70);
  myHashMap->put(74, 22);
  assert(myHashMap->get(74) == 22);
  myHashMap->put(45, 44);
  myHashMap->put(63, 13);
  myHashMap->remove(57);
  assert(myHashMap->get(66) == 42);
  assert(myHashMap->get(31) == -1);
  myHashMap->put(51, 95);
  myHashMap->remove(63);
  assert(myHashMap->get(63) == -1);
  myHashMap->put(97, 47);
  myHashMap->put(19, 29);
  myHashMap->put(58, 23);
  myHashMap->remove(55);
  myHashMap->put(32, 60);
  assert(myHashMap->get(29) == -1);
  myHashMap->put(12, 95);
  myHashMap->put(34, 65);
  myHashMap->put(40, 86);
  myHashMap->put(78, 77);
  myHashMap->put(7, 5);
  myHashMap->put(71, 84);
  myHashMap->put(63, 11);
  myHashMap->put(93, 26);
  myHashMap->put(9, 15);
  myHashMap->remove(95);
  myHashMap->put(25, 37);
  myHashMap->put(87, 57);
  myHashMap->put(22, 14);
  myHashMap->put(87, 68);
  myHashMap->put(23, 15);
  myHashMap->remove(23);
  myHashMap->put(28, 60);
  myHashMap->put(4, 72);
  myHashMap->remove(23);
  myHashMap->put(0, 79);
  myHashMap->put(33, 29);
  myHashMap->put(38, 59);
  myHashMap->remove(9);
  myHashMap->remove(6);
  myHashMap->remove(1);
  myHashMap->put(82, 15);
  myHashMap->put(83, 23);
  assert(myHashMap->get(95) == -1);
  myHashMap->put(53, 5);
  myHashMap->put(43, 72);
  myHashMap->put(5, 23);
  assert(myHashMap->get(63) == 11);
  myHashMap->put(22, 44);
  myHashMap->put(78, 32);
  myHashMap->put(19, 15);
  assert(myHashMap->get(11) == -1);
  myHashMap->put(82, 14);
  myHashMap->put(55, 14);
  myHashMap->put(97, 40);
  assert(myHashMap->get(82) == 14);
  myHashMap->put(33, 68);
  myHashMap->put(95, 2);
  myHashMap->remove(99);
  myHashMap->remove(72);
  myHashMap->put(67, 75);
  myHashMap->put(84, 85);
  myHashMap->remove(6);
  myHashMap->put(17, 13);
  myHashMap->remove(55);
  myHashMap->put(61, 35);
  myHashMap->put(95, 33);
  myHashMap->put(44, 54);
  myHashMap->remove(84);
  myHashMap->put(82, 4);
  myHashMap->put(83, 84);
  myHashMap->put(97, 86);
  myHashMap->put(57, 39);
  myHashMap->put(76, 36);
  myHashMap->put(81, 60);
  myHashMap->put(29, 92);
  myHashMap->put(84, 85);
  myHashMap->put(36, 31);
  myHashMap->put(1, 36);
  assert(myHashMap->get(77) == -1);
  myHashMap->put(11, 68);
  myHashMap->put(81, 52);
  myHashMap->put(67, 11);
  myHashMap->remove(30);
  myHashMap->put(10, 55);
  myHashMap->put(30, 8);
  myHashMap->put(7, 26);
  myHashMap->put(50, 9);
}
