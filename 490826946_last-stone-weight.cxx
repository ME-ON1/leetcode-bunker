id = 490826946 
lang = cpp 
runtime  = 4 ms 
memory = 7.5 MB
title_slug = last-stone-weight
code =
 ```class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int > q ; 
        for(int i = 0 ; i < stones.size() ; i++ ) {
            q.push(stones[i]) ;
        }
        
        
        while(q.size() >= 2) {
            int a = q.top( ); q.pop() ;
            int b = q.top() ; q.pop() ;
            
            if(a > b ){
                q.push(abs(a -b) ) ;
            }
        }
        if(q.size() == 0 ) {
            return 0 ;
        }
            return q.top() ;
    }
};```