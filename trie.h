#ifndef TRIE_H_
#define TRIE_H_

#include <unordered_map>

class trie_node {
 public:
  trie_node() { value_ = '#'; }
  trie_node(char c) { value_ = c; }

  bool has(char c) { return children_.count(c) > 0; }

  void insert(const std::string& s, int offset) {
    if (offset == s.size()) {
      children_.insert({'\0', new trie_node('\0')});
      return;
    }

    if (!has(s[offset])) {
      children_.insert({s[offset], new trie_node(s[offset])});
    }

    children_[s[offset]]->insert(s, offset + 1);
  }

  std::vector<std::string> all() {
    std::vector<std::string> result;

    for (auto& [c, node] : children_) {
      if (c == '\0') {
        result.push_back("");
      } else {
        auto sub = node->all();
        result.insert(result.end(), sub.begin(), sub.end());
      }
    }

    return result;
  }

  std::vector<std::string> all(const std::string& s, int offset) {
    if (offset == s.size()) {
      return all();
    }
    if (!has(s[offset])) return {};

    auto result{children_[s[offset]]->all(s, offset + 1)};
    for (auto& s : result) {
      s.insert(s.begin(), s[offset]);
    }

    return result;
  }

 private:
  char value_;
  std::unordered_map<char, trie_node*> children_;
};

class trie {
 public:
  void insert(const std::string& s) { dummy_.insert(s, 0); }
  std::vector<std::string> search(const std::string& s) {
    return dummy_.all(s, 0);
  }

 private:
  trie_node dummy_;
};

#endif  // !TRIE_H_
