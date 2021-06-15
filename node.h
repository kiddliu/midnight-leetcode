#ifndef NODE_H_
#define NODE_H_

#include <vector>

class Node {
 public:
  int val;
  std::vector<Node*> children;

  Node() {}

  Node(int _val) { val = _val; }

  Node(int _val, std::vector<Node*> _children) {
    val = _val;
    children = _children;
  }
};

#endif  // NODE_H_
