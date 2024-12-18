#include <iostream>
#include <queue>
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

// iterative way which is little complex
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if (p == nullptr || q == nullptr) {
            return false;
        }
        queue<TreeNode*> nodeP, nodeQ;

        // tree traverse & check
        nodeP.push(p);
        nodeQ.push(q);
        while (!nodeP.empty() && !nodeQ.empty()) {
            TreeNode *currentp = nodeP.front();
            TreeNode *currentq = nodeQ.front();
            nodeP.pop();
            nodeQ.pop();

            if (currentp == nullptr && currentq == nullptr) {
                continue;
            }

            if (currentp == nullptr || currentq == nullptr) {
                return false;
            }

            if (currentp->val != currentq->val) {
                return false;
            }
            nodeP.push(currentp->left);
            nodeP.push(currentp->right);
            nodeQ.push(currentq->left);
            nodeQ.push(currentq->right);
        }
        return (nodeP.empty() && nodeQ.empty());
    }
};

// recursive way (super easy peasy)
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }

        if (p == nullptr || q == nullptr) {
            return false;
        }

        if (p->val != q->val) {
            return false;
        }

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};