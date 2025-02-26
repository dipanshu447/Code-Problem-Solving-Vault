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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode *prev = nullptr;
        while(head != nullptr){
            ListNode *NextNode = head->next; // Save the next node
            head->next = prev; // reverse the link
            prev = head; // move prev node forward
            head = NextNode; // move head forward
        }
        return prev; // prev becomes the new head
    }
};