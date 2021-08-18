id = 492252431 
lang = rust 
runtime  = 8 ms 
memory = 2.3 MB
title_slug = power-of-three
code =
 ```impl Solution {
    pub fn is_power_of_three(n: i32) -> bool {
        let mut n = n ; 

        if n <  1 {
            return false ;
        }
        while n % 3 ==  0 {
            n /= 3 ;
        }
        
        n == 1 
    }
}```