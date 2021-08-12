id = 533358189
runtime  = 0 ms 
memory = 5.8 MB
title_slug = three-divisors
code =
 ```class Solution {
public:
    bool isThree(int n) {
        if(n<4)
            return false; 
        int res = (int)sqrt(n);
        if((res * res ) != n)
        {
            return false;
        }
            // return false;
        for(int i = 2 ; i < res ; i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
};```