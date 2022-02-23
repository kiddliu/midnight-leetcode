#ifndef CLONE_GRAPH_H_
#define CLONE_GRAPH_H_

#include <unordered_map>
#include <vector>

class Node {
 public:
  int val;
  std::vector<Node*> neighbors;
  Node() {
    val = 0;
    neighbors = std::vector<Node*>();
  }
  Node(int _val) {
    val = _val;
    neighbors = std::vector<Node*>();
  }
  Node(int _val, std::vector<Node*> _neighbors) {
    val = _val;
    neighbors = _neighbors;
  }
};

// DFS
// Runtime: 4 ms, faster than 93.09% of C++ online submissions for Clone Graph.
// Memory Usage: 8.9 MB, less than 45.65% of C++ online submissions for Clone Graph.
//
class Solution {
 public:
  Node* cloneGraph(Node* node) {
    if (!node) return nullptr;

    if (map.count(node) == 0) {
      map[node] = new Node(node->val, {});
      for (auto neighbor : node->neighbors) {
        map[node]->neighbors.push_back(cloneGraph(neighbor));
      }
    }
    return map[node];
  }

 private:
  std::unordered_map<Node*, Node*> map;
};

#endif  // !CLONE_GRAPH_H_
