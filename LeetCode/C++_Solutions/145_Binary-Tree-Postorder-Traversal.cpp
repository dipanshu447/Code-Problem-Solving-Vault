#include <iostream>
#include <vector>
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

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode* previous = nullptr;
        stack<TreeNode*> Nodes;
        vector<int> postorderVal;
        do {
            while (root != nullptr) {
                Nodes.push(root);
                root = root->left;
            }
            while (root == nullptr && !Nodes.empty()) {
                root = Nodes.top();
                if (root->right == nullptr || root->right == previous) {
                    postorderVal.push_back(root->val);
                    Nodes.pop();
                    previous = root;
                    root = nullptr;
                } else {
                    root = root->right;
                }
            }

        } while (!Nodes.empty());
        return postorderVal;
    }
};