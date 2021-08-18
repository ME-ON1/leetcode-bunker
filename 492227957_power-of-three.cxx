id = 492227957 
lang = cpp 
runtime  = 20 ms 
memory = 5.8 MB
title_slug = power-of-three
code =
 ```class Solution {
public:
    bool isPowerOfThree(int n) {
        long long int i = 0 ;
        if(n < 1 )  return false ;
        
        while( n %  3 == 0 ){
            n /= 3 ;
            
        }
        
        return n == 1; 
     }
};```