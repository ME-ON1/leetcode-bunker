id = 449428514 
lang = cpp 
runtime  = 20 ms 
memory = 71.2 MB
title_slug = add-two-numbers
code =
 ```/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode  lk;
        ListNode* tmp = &lk ;
        int carry = 0 ;
        while(l1  || l2){
            int data = (l1 ? l1->val : 0) + (l2 ? l2->val: 0) + carry ;
            carry = data/10;
            tmp->next =new ListNode(data%10);
            tmp = tmp->next ;
            if(l1) l1 = l1->next ;
            if(l2) l2 = l2->next ;
        }
        if(carry){
            tmp->next = new ListNode(1) ;
        }
        
        return lk.next ;
    }
};```