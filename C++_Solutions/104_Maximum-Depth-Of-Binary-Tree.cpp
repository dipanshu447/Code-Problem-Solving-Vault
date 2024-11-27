#include <iostream>
#include <queue>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}; // comment this Treenode definition before running code in leetcode

// Iterative approach
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int depth = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int levelSize = q.size();
            depth++;
            for (int i = 0; i < levelSize; i++) {
                TreeNode* temp = q.front();
                q.pop();

                if (temp->left != nullptr) {
                    q.push(temp->left);
                }
                if (temp->right != nullptr) {
                    q.push(temp->right);
                }
            }
        }
        return depth;
    }
};

// First way of doing this in recursion
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int leftDepth = maxDepth(root->left) + 1;
        int rightDepth = maxDepth(root->right) + 1;
        return (leftDepth > rightDepth)? leftDepth : rightDepth;
    }
};

// Second way of doing this in recursion
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};