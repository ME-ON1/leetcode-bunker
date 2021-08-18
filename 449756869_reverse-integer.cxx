id = 449756869 
lang = cpp 
runtime  = 0 ms 
memory = 5.9 MB
title_slug = reverse-integer
code =
 ```class Solution {
public:
    int reverse(int x) {
        int j = x;
        int rev = 0 ;
        while(x != 0 ) {
            int rem = x %10 ;
            x /= 10 ;
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && rem > 7)){
                return 0 ;
            }
            if(rev < INT_MIN/10 || (rev == INT_MAX/10 && rev < -8)){
                return 0; 
            }
            rev = rem + rev*10 ;
        }       
        return rev ;
    }
};```