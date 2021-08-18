id = 490824656 
lang = cpp 
runtime  = 4 ms 
memory = 7.6 MB
title_slug = last-stone-weight
code =
 ```class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int > q ; 
        for(auto i :stones) {
            q.push(i);
        }
        while(q.size() >= 2 ){
            int a = q.top() ;
            q.pop() ;
            int b = q.top();
            q.pop() ;      
            if(a == b) {
                continue ; 
            }else {
                q.push(abs(a-b) ); 
            }
        }
        cout << q.size() << endl ;
        if(q.size() == 0 ) {
            return 0 ;
        }else {
            return q.top() ;            
        }
    }
};```