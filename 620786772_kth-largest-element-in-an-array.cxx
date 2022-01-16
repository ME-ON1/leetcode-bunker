id = 620786772 
lang = cpp 
runtime  = 8 ms 
memory = 10.3 MB
title_slug = kth-largest-element-in-an-array
code =

 class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int> > pq;
        
        for(auto i : nums ) {
            pq.push(i) ;
            if(pq.size() > k ) {
                pq.pop() ;
            }
        }
        
        return pq.top() ;
    }
};