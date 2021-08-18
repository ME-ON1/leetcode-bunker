id = 510521384 
lang = cpp 
runtime  = 44 ms 
memory = 20.8 MB
title_slug = group-anagrams
code =
 ```class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > ar ;
        
        if(strs.size( ) == 0 ) {
          return ar ;
        }
        
        map<string , vector<string >> mp ;
        
        for(auto i : strs ) 
        {
            string key = i ; 
            
            sort(key.begin() , key.end());
            
            mp[key].push_back(i) ;
        }
        
        for(auto i : mp) 
        {
            ar.push_back(i.second) ;
        }
        
        return ar ;
        
    }
    
    bool checkAna(string s, string t ) 
    {
        vector<int> ar(26, 0 ) ;
        if(s.size() == t.size() ) 
        {
           sort(s.begin() , s.end() ) ; 
           sort(t.begin() , t.end()) ;
            
            if(s == t) 
            {
                return true ; 
            }else {
                return false ;
            }
        }else 
        {
            return false; 
        }
    }
};```