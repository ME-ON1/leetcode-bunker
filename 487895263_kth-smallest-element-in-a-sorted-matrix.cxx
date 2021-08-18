id = 487895263 
lang = cpp 
runtime  = 40 ms 
memory = 14.4 MB
title_slug = kth-smallest-element-in-a-sorted-matrix
code =
 ```class Solution {
public:
    int kthSmallest(vector<vector<int>>& ar, int k) {
        priority_queue<int , vector<int> , greater<int> > pq ;
        
        for(int i = 0 ;i < ar.size(); i++ ) {
            for(int j = 0 ; j < ar[0].size() ; j++ ) {
                pq.push(ar[i][j]) ;
            }
        }
        
        while(--k ){
            pq.pop() ;
        }
        return pq.top() ;
    }
};```