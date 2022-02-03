id = 633015771 
lang = cpp 
runtime  = 196 ms 
memory = 89.9 MB
title_slug = sort-list
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
    
    ListNode * mergeList(ListNode * l1, ListNode * l2) {
        ListNode * newHead = new ListNode(0);
        ListNode * tmp = newHead ;
        while( l1 && l2 ) {
            if (l1->val < l2->val ) {
                tmp->next = new ListNode(l1->val ) ;
                l1 = l1->next ;
            } else {
                tmp->next = new ListNode(l2->val ) ;
                l2 = l2->next ;
            }
            tmp = tmp->next ;
        }
        if (l1 )  {
            tmp->next = l1; 
        } else {
            tmp->next = l2 ;
        }
        return newHead->next ;
    }


    ListNode* sortList(ListNode* A) {
        if (A == NULL || A->next == NULL) {
            return A ;
        }
        ListNode * slowPointer = A ;
        ListNode * fastPointer = A ;
        ListNode * tmp = A ;
        while (fastPointer != NULL and fastPointer->next != NULL ) {
            tmp = slowPointer;
            fastPointer = fastPointer->next->next ;
            slowPointer = slowPointer->next ;
        }
        tmp->next = NULL ;
        ListNode* l1 = sortList(A) ;
        ListNode* l2 = sortList(slowPointer);
        return mergeList(l1,l2);
        // return A ; 
    }



};