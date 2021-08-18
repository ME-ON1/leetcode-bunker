id = 479016947 
lang = cpp 
runtime  = 4 ms 
memory = 8.5 MB
title_slug = reverse-linked-list
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL ) {
            return head ;
        }
        
        ListNode* node = reverseList(head->next) ;
        
        head->next->next = head ;
        head->next = NULL ;
        return node ;
    }
};```