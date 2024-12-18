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
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode* current = root;
        stack<TreeNode *> prevNode;
        vector<int> preorderVal;
        while(true){
            while(current != nullptr){
                preorderVal.push_back(current->val);
                prevNode.push(current);
                current = current->left;
            }
            if(prevNode.empty()){
                break;
            }
            current = prevNode.top();
            prevNode.pop();
            current = current->right;
        }
        return preorderVal;
    }
};