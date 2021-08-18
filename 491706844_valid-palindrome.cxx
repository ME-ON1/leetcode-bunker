id = 491706844 
lang = cpp 
runtime  = 4 ms 
memory = 7.3 MB
title_slug = valid-palindrome
code =
 ```class Solution {
public:
    bool isPalindrome(string s) {
        int i  = 0 , j = s.size() -1  ;
       
        while(i < j ) {
            if(!isalnum(s[i])){
                i++ ;
                continue ;
            }
            if(!isalnum(s[j])) {
                j-- ;
                continue ;
            }
            if(tolower(s[i]) == tolower(s[j])){
                i++ ;
                j-- ;
            }else {
                return false ;
            }
        }
        return true ;
     }
};```