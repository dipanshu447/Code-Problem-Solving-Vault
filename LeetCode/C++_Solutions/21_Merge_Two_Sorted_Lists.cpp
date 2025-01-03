#include <iostream>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}; // comment this listnode definition before running code in leetcode

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = new ListNode(-1); 
        ListNode *newHead = head; 
        while (list1 != nullptr && list2 != nullptr) 
        {
            if (list1->val < list2->val) 
            {
                newHead->next = list1;
                list1 = list1->next;
            }
            else
            {
                newHead->next = list2;
                list2 = list2->next;
            }
            newHead = newHead->next;
        }
        if (list1 != nullptr)
        {
            newHead->next = list1;
        }
        else
        {
            newHead->next = list2;
        }
        return head->next;
    }
};