id = 476375181 
lang = cpp 
runtime  = 48 ms 
memory = 7.1 MB
title_slug = longest-palindromic-substring
code =
 ```class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2) {
            return s ;
        }
        int maxLen = 0 ;
        int startI = 0 ;
        for(int i = 0 ; i < s.size() ;){
            int l = i ; 
            int r = i ;
            
            while(r < s.size()-1 && s[r] == s[r + 1]) r++; 
            i = r +1 ; 
            
            while(r < s.size()-1 && l > 0 && s[r + 1] == s[l - 1]) {               r++ ;
                l-- ; 
            }
            cout << l << " " << r << "\n" ; 
            int savedLen = r - l + 1;
            if(maxLen < savedLen ) {
                maxLen = r - l + 1 ;
                startI = l ;   
            }
        }
        cout << startI << " " << maxLen << " " ; 
        return s.substr(startI, maxLen) ;
    }
};```