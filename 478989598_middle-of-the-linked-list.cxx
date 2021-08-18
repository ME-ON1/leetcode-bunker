id = 478989598 
lang = cpp 
runtime  = 0 ms 
memory = 6.5 MB
title_slug = middle-of-the-linked-list
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
    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL ){
            return head ;
        }
        
        ListNode* fast = new ListNode(NULL) ;
        ListNode* slow = new ListNode(NULL) ;
        
        fast = head ;
        
        while(fast->next != NULL ){
            // if(fast->next != NULL ){
                slow = head ;
                head = head->next ;
                fast = fast->next ;
                
                if(fast->next != NULL ) {
                    fast = fast->next ;
                }
        }
        
        // ListNode * newNode = new ListNode(slow->next->val);
        return slow->next ;
    }
};```