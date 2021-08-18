id = 474987752 
lang = cpp 
runtime  = 0 ms 
memory = 10.7 MB
title_slug = remove-nth-node-from-end-of-list
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
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * slow, *fast ;
        ListNode nhead(-1) ;
        nhead.next = head;  
        fast = &nhead ; 
        slow = &nhead ;
        for(int i = 0; i < n ; i++ ) {
            fast = fast->next ;
        }
        
        
        while(fast->next != NULL  ) {
            fast = fast->next ;
            slow = slow->next ;
        }
        
        slow->next = slow->next->next ;
        
        return nhead.next ; 
        
    }
};```