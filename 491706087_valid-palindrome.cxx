id = 491706087 
lang = cpp 
runtime  = 8 ms 
memory = 7.2 MB
title_slug = valid-palindrome
code =
 ```class Solution {
public:
    bool isPalindrome(string s) {
        int i  = 0 , j = s.size() -1  ;
       
        while(i < j ) {
            if(!(tolower(s[i]) >= 97 && tolower(s[i]) <= 121 || s[i] >= 48 && s[i] <= 57 ) ){
                i++ ;
                continue; 
            }
            if(!(tolower(s[j]) >= 97 && tolower(s[j]) <= 121 || s[j] >= 48 && s[j] <= 57  ) ){
                j-- ;
                // cout << s[i
                continue ;
            }
            // cout <<(char)tolower(s[i] ) << " " << i << " " << (char)tolower(s[j]) <<  "  " << j << endl ;
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