id = 478419923 
lang = cpp 
runtime  = 0 ms 
memory = 6.1 MB
title_slug = climbing-stairs
code =
 ```class Solution {
public:
    
    int recurse(int n, unordered_map<int,long long int>& mp ){
        if(mp[n] != 0 ) {
            return mp[n] ;
        }
        mp[n] = recurse(n-1, mp ) + recurse( n-2, mp) ;
        return mp[n] ;
    }
    
    int climbStairs(int n) {
        unordered_map<int, long long int > mp ; 
          mp[0] = 0 ;
          mp[1] = 1 ;
          mp[2] = 2 ;
        
          return recurse(n , mp);
        }
};```