id = 535840712 
lang = cpp 
runtime  = 396 ms 
memory = 98.9 MB
title_slug = remove-stones-to-minimize-the-total
code =
 ```class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(), piles.end()) ;
        int res = accumulate(piles.begin(), piles.end(), 0);
        
        while(k--) 
        {
            int q = pq.top() ;
            pq.pop() ;
            res -= q / 2 ;
            q -= q/2 ;
            pq.push(q); 
        }
        return res ;
    }
};```