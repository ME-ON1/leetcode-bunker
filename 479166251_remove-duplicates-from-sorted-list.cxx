id = 479166251 
lang = cpp 
runtime  = 12 ms 
memory = 11.6 MB
title_slug = remove-duplicates-from-sorted-list
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL ){
            return NULL ;
        }
        
        ListNode* fast = new ListNode(NULL) ;
        fast = head ;
        while(fast->next != NULL ){
            if(fast->next->val == fast->val ) {
                fast->next = fast->next->next ;
            }else {
                fast = fast->next ;
            }
        }
        
        
        return head ;
        
    }
};```