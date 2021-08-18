id = 535836965 
lang = cpp 
runtime  = 400 ms 
memory = 105.1 MB
title_slug = remove-stones-to-minimize-the-total
code =
 ```class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq ;
        int sum = 0; 
        for(auto i : piles )
        {
            pq.push(i) ;   
            sum += i ;
        }
        
        while(k--)
        {
            int q = pq.top() ;
            pq.pop() ;
            sum -= q/2 ;
            q -= q/2 ; 
            pq.push(q); 
        }
        
        return sum ;
    }
};```