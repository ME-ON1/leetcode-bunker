id = 482501069 
lang = cpp 
runtime  = 12 ms 
memory = 7.5 MB
title_slug = linked-list-cycle-ii
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
    ListNode *detectCycle(ListNode *head) {
        ListNode * tor =  head; 
        ListNode * hare = head ;
        if(head == NULL || head->next == NULL  ) {
            return NULL ;
        }
        bool hasCy = false ;
        while(tor != NULL && hare != NULL ) {
            tor = tor->next ;
            
            if(hare->next == NULL ) return NULL ;
            hare = hare->next->next ;
            if(hare  == tor ){
                hasCy = true ;
                break; 
            }
        }
        
        if(!hasCy) return NULL ;
        
        tor = head ; 
        
        while(tor != hare ) {
            hare = hare->next ;
            tor = tor->next ;
        }
        
        return tor ;
    }
};```