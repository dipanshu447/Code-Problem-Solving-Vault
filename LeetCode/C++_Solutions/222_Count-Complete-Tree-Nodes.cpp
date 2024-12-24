#include <iostream>
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

class Solution {
private:
    int depth(TreeNode* Node){
        int depth = 0;
        // Traverse down the leftmost path to calculate the depth
        while(Node){
            depth++;
            Node = Node->left;
        }
        return depth;
    }

public:
    int countNodes(TreeNode* root) {
        if(!root) return 0;

        // Calculate the depth of the left and right subtrees
        int leftDepth = depth(root->left); 
        int rightDepth = depth(root->right);
        
        if(leftDepth == rightDepth){
            // If the left and right depths are the same, the left subtree is a complete binary tree
            // Nodes in the left subtree are (2^leftDepth - 1) + the root node
            return (1 << leftDepth) + countNodes(root->right);
        } else {
            // If depths differ, the right subtree is a complete binary tree
            // Nodes in the right subtree are (2^rightDepth - 1) + the root node
            return (1 << rightDepth) + countNodes(root->left);
        }
    }
};