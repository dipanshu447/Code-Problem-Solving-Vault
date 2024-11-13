#include <iostream>
using namespace std;

//   Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        if (head == nullptr) {
            return head;
        }
        while (current->next != nullptr) {
            if (current->val == current->next->val) {
                current->next = current->next->next; // skip duplicate node by update the next pointer
            } else {
                current = current->next;
            }
        }
        return head;
    }
};