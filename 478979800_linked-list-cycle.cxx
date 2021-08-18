id = 478979800 
lang = cpp 
runtime  = 8 ms 
memory = 8.1 MB
title_slug = linked-list-cycle
code =
 ```/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = new ListNode(NULL) ;
        ListNode *fast = new ListNode(NULL) ;
        if(head == NULL ) return false ;
        else { fast = head ; }
        while(slow != fast ) {
            if(fast->next != NULL ){
                fast = fast->next ;
                slow = head->next ;
                head = head->next ;
                if(fast->next != NULL ) {
                    fast = fast->next ;
                }else {
                    return false ;
                }
            }else {
                return false ;
            }
        }
        
        return true ;
    }
};```