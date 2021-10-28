id = 577813164 
lang = cpp 
runtime  = 4 ms 
memory = 6 MB
title_slug = number-of-1-bits
code =

 class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt  = 0; 
        while(n > 0) 
        {
            if ( (n & 1) > 0 )
            {
                cnt++ ;
            }
            n = n >> 1;
            // if (( n & 1 > 0 )
        }
        return cnt ;
        
    }
};