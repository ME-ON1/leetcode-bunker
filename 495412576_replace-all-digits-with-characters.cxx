id = 495412576 
lang = cpp 
runtime  = 0 ms 
memory = 6 MB
title_slug = replace-all-digits-with-characters
code =
 ```class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1 ; i < s.size() ; i++ ) {
            if(i & 1 ) {
                s[i] +=  s[i-1] - '0';
            }
        }
        
        return s; 
    }
};```