id = 612778642 
lang = cpp 
runtime  = 485 ms 
memory = 111.2 MB
title_slug = destroying-asteroids
code =

 class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        priority_queue<int, vector<int>, greater<int>> pq;
        long long mas = mass ;
        for(auto i : asteroids) {
            pq.push(i);
        }
        while(!pq.empty()) {
            int q = pq.top() ;
            pq.pop() ;
            if(mas >= q ){
                mas += q ;
            } else {
                return false;
            }
        }
        return true ;
    }
};