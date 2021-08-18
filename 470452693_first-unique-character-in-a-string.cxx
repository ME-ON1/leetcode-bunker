id = 470452693 
lang = cpp 
runtime  = 40 ms 
memory = 10.7 MB
title_slug = first-unique-character-in-a-string
code =
 ```class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int > m ;
        
        for(auto &i : s){
            m[i]++ ;
        }
        
        for(int i = 0; i < s.size(); i++ ) {
            if(m[s[i]] == 1 ){
                return i ;
            }
        }
        
        return -1 ;
    }
};```