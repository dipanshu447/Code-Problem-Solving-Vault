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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        // Dummy node simplifies edge case handling for the head
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode *current = temp;
        while(current->next != nullptr){
             if(current->next->val == val){
                ListNode* del = current->next;
                current->next = del->next;
                delete del;
            }else{
                current = current->next;
            }
        }
        head = temp->next; // update head 
        delete temp; // Free the dummy node
        return head;
    }
};