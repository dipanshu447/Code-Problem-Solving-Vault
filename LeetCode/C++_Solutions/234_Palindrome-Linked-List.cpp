#include <iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
}; // comment this ListNode definition before running code in leetcode

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode *slow = head, *fast = head;

        // Step 1: Find the middle of the list
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* prev = nullptr;
        while(slow){
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // Step 3: Compare the two halves
        while(prev){
            if(head->val != prev->val) return false;
            head = head->next;
            prev = prev->next;
        }
        return true;
    }
};