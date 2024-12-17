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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode sum(0); // Dummy node
        ListNode* p = &sum;
        int carry = 0; // Carry for the sum
        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            int plus = carry;

            if (l1 != nullptr) { // Add value from l1
                plus += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) { // Add value from l2
                plus += l2->val;
                l2 = l2->next;
            }
            carry = plus / 10; // Update carry
            p->next = new ListNode(plus % 10); // Create new node for current sum
            p = p->next;
        }
        return sum.next; // Return result list
    }
};