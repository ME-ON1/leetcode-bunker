id = 612744441 
lang = cpp 
runtime  = 0 ms 
memory = 6.2 MB
title_slug = check-if-all-as-appears-before-all-bs
code =

 class Solution {
public:
    
    bool checkString(string s) {
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == 'b' && s[i+1] == 'a') {
                return false;
            }
        }
        
        return true ;
    }
};