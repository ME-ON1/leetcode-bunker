id = 470104780 
lang = cpp 
runtime  = 24 ms 
memory = 77.8 MB
title_slug = repeated-substring-pattern
code =
 ```class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size() <= 1  ) {
            return false ;
        }
        for(int i = 1 ; i <= s.size()/2 ; i++ ) {
            if(s.size()%i == 0 ) {
                // cout << i << "\n" ;
                string newString = combine(s, i) ;
                if(newString == s) {
                    return true ;
                }
            }
        }
        return false ;
    }
    
    string combine(string &s , int i) {
        string p = s.substr(i) ;
        p += s.substr(0, i) ;
        
        return p ;
    }
};


```