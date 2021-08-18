id = 467970028 
lang = cpp 
runtime  = 8 ms 
memory = 8.1 MB
title_slug = roman-to-integer
code =
 ```class Solution {
public:
    int romanToInt(string s) {
        int num = 0; 
        unordered_map<char,int> mp ; 
        
        mp['I'] = 1 ;
        mp['V'] = 5 ;
        mp['X'] = 10 ;
        mp['L'] = 50 ;
        mp['C'] = 100 ;
        mp['D'] = 500 ;
        mp['M'] = 1000 ;
        num = mp[s[s.size() -1 ]] ;
        for(int i = s.size() - 2 ; i >= 0; i-- ) {
            char cur = s[i] ;
            char prev = s[i+1] ;
            
                if(mp[cur] >= mp[prev]) {
                num += mp[cur] ;
            }else {
                num -= mp[cur] ;
            }
        }
    return abs(num) ;

    }
    
    };```