id = 607840527 
lang = cpp 
runtime  = 0 ms 
memory = 5.9 MB
title_slug = a-number-after-a-double-reversal
code =

 class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0 ) {
            return true; 
        }
        
        if(num % 10 == 0 ) {
            return false;
        } else {
            return true ;
        }
    }
    
};