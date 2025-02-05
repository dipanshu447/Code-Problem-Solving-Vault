#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
}; // comment this ListNode definition before running code in leetcode


// effcient solution
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        if(headA->next == nullptr && headB->next == nullptr && headA != headB) return nullptr;
        ListNode* l1 = headA, *l2 = headB;
        while(l1 != l2){
            l1 = (l1 == nullptr) ? headB : l1->next;
            l2 = (l2 == nullptr) ? headA : l2->next;
        }
        return l1;
    }
};

// another way but less efficient
class Solution {
public:
    int len(ListNode *temp){
        int count = 0;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        int l1s = len(headA), l2s = len(headB);
        while(l1s > l2s){
            headA = headA->next;
            l1s--;
        }
        while(l2s > l1s){
            headB = headB->next;
            l2s--;
        }
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};