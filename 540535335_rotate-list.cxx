id = 540535335 
lang = cpp 
runtime  = 8 ms 
memory = 11.7 MB
title_slug = rotate-list
code =

 /**
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head )
        {
            return NULL ;
        }
        int cnt = 1 ; 
        ListNode * tmpNode = head ; 
        while( tmpNode->next ) 
        {
            tmpNode = tmpNode->next ;
            cnt++ ;
        }
        tmpNode->next = head; 
        if( k %= cnt )
        {
            for(int i = 0; i < cnt  - (k % cnt) ; i++ ) 
            {
                tmpNode = tmpNode->next ;
            }
        }
        ListNode * newHead = tmpNode->next ;
        tmpNode->next= NULL ; 
        return newHead ;
        
    }
};