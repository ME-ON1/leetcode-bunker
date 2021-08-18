id = 467529137 
lang = cpp 
runtime  = 12 ms 
memory = 6 MB
title_slug = palindrome-number
code =
 ```class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false ;
        }
        //count the length of x 
        int div = 1 ;
        while(x / div >= 10) {
            div *= 10 ; 
            
        }
                
        while(x != 0 ) {
            int lead = x / div ;
            int trail = x % 10 ;
            
            // cout <<lead << " " << trail << "\n " ;   
            if(lead != trail ) {
                return false ; 
            }
                        
            x = (x % div ) / 10 ;
            div /= 100 ;
            // cout << x << " x \n" ;
         }
        
        return true ;
        
    }
};```