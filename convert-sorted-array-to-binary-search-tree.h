#ifndef CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H_
#define CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H_

#include <vector>

#include "tree-node.h"

namespace solution {

TreeNode* sortedArrayToBST(std::vector<int>& nums) {
  // Divide and conquer
  // Runtime: 8 ms, faster than 95.28% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
  // Memory Usage: 21.4 MB, less than 46.31% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
  //
  if (nums.size() == 0) return nullptr;
  if (nums.size() == 1) return new TreeNode(nums[0]);
  if (nums.size() == 2)
    return new TreeNode(nums[1], new TreeNode(nums[0]), nullptr);
  if (nums.size() == 3)
    return new TreeNode(nums[1], new TreeNode(nums[0]), new TreeNode(nums[2]));

  return sortedArrayToBST(nums, nums.cbegin(), nums.cend());
}

TreeNode* sortedArrayToBST(std::vector<int>& nums,
                           const std::vector<int>::const_iterator& begin,
                           const std::vector<int>::const_iterator& end) {
  if (end - begin > 2) {
    auto mid = (end - begin) / 2;
    return new TreeNode(*(begin + mid),
                        sortedArrayToBST(nums, begin, begin + mid),
                        sortedArrayToBST(nums, begin + mid + 1, end));
  } else if ((end - begin) == 2) {
    return new TreeNode(*(begin + 1), new TreeNode(*begin), nullptr);
  }
  return new TreeNode(*begin);
}

}

#endif  // CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H_
