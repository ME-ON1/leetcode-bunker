id = 490483219 
lang = cpp 
runtime  = 16 ms 
memory = 13.9 MB
title_slug = merge-k-sorted-lists
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int , int> mp;
        
        ListNode *tmp = new ListNode() ;
        
        for(int i = 0 ; i < lists.size(); i++ ) {
            ListNode * tu = lists[i] ;
                        
            while(tu != NULL ) {
                // cout << tu->val << " " ; 
                mp[tu->val] += 1 ;
                tu = tu->next ;
            }
        }
        ListNode* lo = tmp; 
        for(auto i : mp ){
            // cout << i.first << " " << i.second << endl ;
            while(i.second--) {
                ListNode * k = new ListNode(i.first) ;
                lo->next = k ; 
                lo = lo->next ; 
            }
        }
        return tmp->next ; 
    }
};```