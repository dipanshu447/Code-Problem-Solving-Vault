#include <iostream>
using namespace std;

//  Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slowTraverse = head;
        ListNode* fastTraverse = head;
        while (fastTraverse != nullptr && fastTraverse->next != nullptr) {
            slowTraverse = slowTraverse->next; // Move slow pointer by 1 step
            fastTraverse = fastTraverse->next->next; // Move fast pointer by 2 steps

            if (slowTraverse == fastTraverse) { // If pointers meet, there is a cycle
                return true;
            }
        }
        return false;
    }
};