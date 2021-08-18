id = 493934468 
lang = cpp 
runtime  = 144 ms 
memory = 84.4 MB
title_slug = maximum-ice-cream-bars
code =
 ```class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
     priority_queue<int ,vector<int> , greater<int> > pq ;
        
        for(auto i : costs ) {
            pq.push(i) ;
        }
        int cnt = 0 ;
        while(pq.size() > 0 ) {
            int a = pq.top() ;
            pq.pop() ;
            if(a <= coins ) {
                cnt ++ ;
                coins -= a ;
            }else {
                break; 
            }
        }
        
        return cnt ; 
    }
};```