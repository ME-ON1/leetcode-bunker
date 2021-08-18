id = 479002220 
lang = cpp 
runtime  = 16 ms 
memory = 15 MB
title_slug = remove-linked-list-elements
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL ){
            return NULL ; 
        }
        while(head != NULL && head->val == val){
            head = head->next ;
        }
        ListNode* fast = new ListNode(NULL) ;
        fast = head ;
        
        while(fast != NULL && fast->next !=NULL  ){
            if(fast->next->val == val ){ //next 
                fast->next = fast->next->next ; // integrate
            }else  {
                fast = fast->next ;                
            }
        }
        return head ;
    }
};```