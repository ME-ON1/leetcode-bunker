id = 493028946 
lang = cpp 
runtime  = 144 ms 
memory = 79.9 MB
title_slug = palindrome-partitioning
code =
 ```class Solution {
public:
    vector<vector<string>> ar; 
    vector<vector<string>> partition(string s) {
        // if(s.size() == 1) {
        //     ar.push_back(s) ;
        //     return ar ;
        // }
        vector<string> pr ;
        string p ;
        getcombine(s , 0, pr ) ;
        return ar ;
    }
    
    void getcombine(string s , int index , vector<string> & pr ) {
         if(index == s.size()) {
             ar.push_back(pr) ;
             return   ; 
         }
        // cout << p << " " << index << endl ;
        for(int i = index ; i < s.size() ; i++ ) {
            if(ispallindrome(s, index , i )) {
                pr.push_back(s.substr(index, i - index  +1 )) ;
                getcombine(s, i + 1 , pr  ) ;   
                pr.pop_back() ;
            }
            // p.pop_back() ;
        }
    }
    
    bool ispallindrome(string &s , int from , int to ) {
        int flag =0 ; 
        while(from <= to) {
            if(s[from++] != s[to--])
                return false ;
        }
        
        return true ; 
        
    
    }
};```