id = 529255182 
lang = cpp 
runtime  = 8 ms 
memory = 7.6 MB
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
        if(head == NULL || head->next == NULL  )
        {
            return NULL ;
        }
        ListNode * fast = head ;
        ListNode* slow = head ;
        
        while(fast->next != NULL && fast->next->next != NULL  ) 
        {
            fast = fast->next->next ;
            slow = slow->next ;
            if(slow == fast )
            {
                slow = head ;
                while(slow != fast ) 
                {
                    slow = slow->next ;    
                    fast = fast->next; 
                }
                return slow ;
            }
            // slow = slow->next; 
        }
        return NULL ;
    }
};```