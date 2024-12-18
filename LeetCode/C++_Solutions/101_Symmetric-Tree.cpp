#include <iostream>
#include <queue>
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

// Iterative approach
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        queue<TreeNode*> nodes;
        nodes.push(root->left);
        nodes.push(root->right);
        while(!nodes.empty()){
            TreeNode *currentleft = nodes.front();
            nodes.pop();
            TreeNode *currentright = nodes.front();
            nodes.pop();

            if(currentleft == nullptr && currentright == nullptr){
                continue;
            }
            
            if(currentleft == nullptr || currentright == nullptr){
                return false;
            }

            if(currentleft->val != currentright->val){
                return false;
            }

            nodes.push(currentleft->left);
            nodes.push(currentright->right);
            nodes.push(currentleft->right);
            nodes.push(currentright->left);
        }
        return true;
    }
};

// Recursive Approach
class Solution {
public:
    bool isMirrorSubtree(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) {
            return true;
        }

        if (left == nullptr || right == nullptr) {
            return false;
        }

        if (left->val != right->val) {
            return false;
        }

        return isMirrorSubtree(left->left, right->right) && isMirrorSubtree(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        return isMirrorSubtree(root->left, root->right);
    }
};