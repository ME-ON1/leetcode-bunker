id = 612778336 
lang = cpp 
runtime  = 192 ms 
memory = 100.7 MB
title_slug = destroying-asteroids
code =

 class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end()) ;
        long long ma = mass ;
        for(auto i : asteroids) {
            if(ma >= i ) {
                ma += i ;
            } else {
                return false;
            }
        } 
        return 1;
    }
};