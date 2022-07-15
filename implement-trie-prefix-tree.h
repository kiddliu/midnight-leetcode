#ifndef IMPLEMENT_TRIE_PREFIX_TREE_H_
#define IMPLEMENT_TRIE_PREFIX_TREE_H_

#include <array>
#include <string>

class TrieNode {
 public:
  bool word{false};

  ~TrieNode() {
    dispose();
  }

  TrieNode* put(char c) {
    if (next_[c - 'a'] == nullptr) {
      next_[c - 'a'] = new TrieNode();
    }
    return next_[c - 'a'];
  }

  TrieNode* get(char c) {
    return next_[c - 'a'];
  }

 private:
  std::array<TrieNode*, 26> next_{};

  void dispose() {
    for (auto& node : next_) {
      if (node) {
        node->dispose();
      }
    }
  }
};

/// <summary>
/// Runtime: 63 ms, faster than 91.86% of C++ online submissions for Implement Trie (Prefix Tree).
/// Memory Usage: 44.9 MB, less than 68.50% of C++ online submissions for Implement Trie (Prefix Tree).
/// </summary>
class Trie {
 public:
  Trie() { root_ = new TrieNode(); }

  void insert(std::string word) {
    auto p{root_};
    for (auto& c : word) {
      p = p->put(c);
    }
    p->word = true;
  }

  bool search(std::string word) {
    auto p{root_};
    for (auto& c : word) {
      p = p->get(c);
      if (p == nullptr) return false;
    }
    return p && p->word;
  }

  bool startsWith(std::string prefix) {
    auto p{root_};
    for (auto& c : prefix) {
      p = p->get(c);
      if (p == nullptr) return false;
    }
    return p;
  }

 private:
  TrieNode* root_;
};

#endif  // !IMPLEMENT_TRIE_PREFIX_TREE_H_
