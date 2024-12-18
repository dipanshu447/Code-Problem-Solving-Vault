#include <iostream>
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

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        return checkHeight(root) != -1; // If height returns -1, the tree is unbalanced
    }

    int checkHeight(TreeNode* node){
        if(node == nullptr){
            return 0;
        }

         // Check the height of the left subtree
        int leftHeight = checkHeight(node->left);
        if(leftHeight == -1){ 
            return -1;
        }

        // Check the height of the right subtree
        int rightHeight = checkHeight(node->right);
        if(rightHeight == -1){
            return -1;
        }

         // If the current node is unbalanced, return -1
        if((leftHeight - rightHeight) > 1 || (rightHeight - leftHeight) > 1){
            return -1;
        }

         // Return the height of the current node
        return 1 + max(leftHeight,rightHeight);  // Height of current node is 1 + max height of left and right
    }
};