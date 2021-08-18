id = 482217554 
lang = cpp 
runtime  = 12 ms 
memory = 6 MB
title_slug = fibonacci-number
code =
 ```class Solution {
public:
    int fib(int n) {
        if(n == 1){
            return 1;
        } else if(n == 0) {
            return 0; 
        }
        
        return fib(n-1) + fib(n-2); 
    }
};```