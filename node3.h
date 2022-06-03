#ifndef NODE_3_H_
#define NODE_3_H_

class Node {
 public:
  int val;
  Node* next;
  Node* random;

  Node(int _val) {
    val = _val;
    next = nullptr;
    random = nullptr;
  }
};

#endif  // !NODE_3_H_
