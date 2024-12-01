#include <iostream>
#include <stack>
using namespace std;


//  Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}; // comment this Treenode definition before running code in leetcode

// Recursive way which is more efficient in this problem
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr){
            return false;
        }

        // Check if the current node is a leaf node
        if(root->left == nullptr && root->right == nullptr){
            return root->val == targetSum;
        }

        int NewTarget = targetSum - root->val;
        return hasPathSum(root->left,NewTarget) || hasPathSum(root->right,NewTarget);
    }
};

// Iterative way which is less efficient than recursion
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }

        // Stacks for nodes and corresponding remaining target sums
        stack<TreeNode*> nodes;
        stack<int> newTargets;
        nodes.push(root);
        newTargets.push(targetSum);
        while (!nodes.empty()) {
            TreeNode* cur = nodes.top();
            int newTarget = newTargets.top();
            nodes.pop();
            newTargets.pop();

            // Check if it's a leaf node and the path sum matches
            if (cur->left == nullptr && cur->right == nullptr && cur->val == newTarget) {
                return true;
            }

            // Push the right child with the updated target
            if (cur->right != nullptr) {
                nodes.push(cur->right);
                newTargets.push(newTarget - cur->val);
            }

            // Push the left child with the updated target
            if (cur->left != nullptr) {
                nodes.push(cur->left);
                newTargets.push(newTarget - cur->val);
            }
        }
        return false;
    }
};