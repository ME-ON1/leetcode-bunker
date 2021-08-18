id = 529754046 
lang = cpp 
runtime  = 194 ms 
memory = 33.8 MB
title_slug = sort-list
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
    ListNode* sortList(ListNode* head) {
       if(head == NULL || head->next == NULL ){
           return head ; 
       } 
        
        priority_queue<int, vector<int > , greater<int>> pq ;
        
        while(head != NULL  )
        {
            pq.push(head->val) ;
            head = head->next ;
        }
        
        ListNode * newHead = new ListNode(NULL) ;
        ListNode *travHead = newHead; 
        while(pq.size())
        {
            int pqVal = pq.top();
            pq.pop(); 
            cout << pqVal << " ";
            ListNode * node = new ListNode() ; 
            node->val = pqVal ;
            travHead->next = node; 
            travHead = travHead->next ;
        }
            
        
        return newHead->next ;
        
    }
};```