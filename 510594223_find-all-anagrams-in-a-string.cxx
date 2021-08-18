id = 510594223 
lang = cpp 
runtime  = 1160 ms 
memory = 397.7 MB
title_slug = find-all-anagrams-in-a-string
code =
 ```class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ar ; 
        if(s.size( ) < p.size())
        {
            return ar;
        }

        vector<int> tmp(26, 0 );
        
        for(auto i : p)
        {
            tmp[i -'a'] ++ ;
        }
        for(int i =  0 ; i < s.size( ) - p.size() + 1 ; i++ ) 
        {
            string t = s.substr(i, p.size()) ;
            if(checkAna(t, tmp) ) 
            {
                ar.push_back(i) ;
            }
        }
        return ar;
    }
    
    bool checkAna(string s, vector<int > ar )
    {
    
        for(int i = 0 ; i < s.size() ; i++ ) 
        {
            ar[s[i] - 'a']-- ;
        }
        
        for(auto i : ar) {
            if(i != 0) 
                return false ;
        }
        
        
        return true ;
    }
};```