id = 467576574 
lang = cpp 
runtime  = 204 ms 
memory = 121.1 MB
title_slug = palindrome-linked-list
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
    
    bool checkPallin(ListNode * tail , ListNode* &head ) {
        if(!tail ) {
            return true ;
        }        
        bool che = checkPallin(tail->next , head ) && tail->val == head->val ;
        head = head->next ;
        return che ;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next ==  NULL) {
            return true ;
        }
        ListNode * tail = head ; 
        // cout << checkPallin(tail, head) << " sdf\n" ;
        return checkPallin(tail , head) ;
        
    }
};```