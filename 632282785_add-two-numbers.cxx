id = 632282785 
lang = cpp 
runtime  = 67 ms 
memory = 71.4 MB
title_slug = add-two-numbers
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
    
    void addRemain(ListNode * tmp ,  ListNode * l , int carry ) 
    {
        while(l != NULL ) {
            int sum = carry + l->val ;
            carry = sum / 10 ;
            tmp->next = new ListNode(sum % 10 ) ;
            tmp = tmp->next;
            l = l->next ;
            
        }
        if (carry ) {
            tmp->next = new ListNode(1) ;
        }
        return ; 
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * newHead = new ListNode();
        
        ListNode * tmp = newHead ;
        if(l1 == NULL ) {
            return l2 ;
        } else if (l2 == NULL ) {
            return l1;
        }
        int sum = 0 , carry = 0 ;
        while( l1 != NULL and l2 != NULL ) 
        {
            // cout << carry << endl ;
            sum = l1->val + l2->val + carry ;
            carry = sum / 10 ;
            tmp->next = new ListNode(sum % 10 ) ;
            tmp = tmp->next ;
            l1 = l1->next ;
            l2 = l2->next ;
        }
        if( l1 != NULL ) 
        {
            addRemain(tmp, l1, carry );
        } else {
            addRemain(tmp, l2, carry) ;
        }
        
        return newHead->next ;
    }
};