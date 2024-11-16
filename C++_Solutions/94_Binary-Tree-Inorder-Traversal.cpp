#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//  Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}; // comment this Treenode definition before running code in leetcode

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode *> s;
        vector<int> treeval;
        while(true){
            while(root != nullptr){
                s.push(root);
                root = root->left;
            }
            if(s.empty()){
                break;
            }
            root = s.top();
            s.pop();
            treeval.push_back(root->val);
            root = root->right;
        }

        return treeval;   
    }
};