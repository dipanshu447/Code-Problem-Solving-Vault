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

// More efficient than recursion in this solution
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int mindepth = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            mindepth++;
            int levelSize = q.size();

            for (int i = 0; i < levelSize; i++) {

                TreeNode* current = q.front();
                q.pop();

                // If it's a leaf node, return the current depth
                if (current->left == nullptr && current->right == nullptr) {
                    return mindepth;
                }

                // Add children to the queue if they exist
                if (current->left != nullptr) {
                    q.push(current->left);
                }

                if (current->right != nullptr) {
                    q.push(current->right);
                }
            }
        }
        return mindepth;
    }
};

// Less efficient than iterative solution 
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        // If one of the subtrees is null, only consider the other subtree
        if (root->left == nullptr) {
            return 1 + minDepth(root->right);
        }

        if (root->right == nullptr) {
           return 1 + minDepth(root->left);
        }

        // Both subtrees exist, take the minimum of the two
        return 1 + min(minDepth(root->left),minDepth(root->right));
    }
};