id = 510925346 
lang = cpp 
runtime  = 12 ms 
memory = 8.7 MB
title_slug = find-all-anagrams-in-a-string
code =
 ```class Solution {
    public:
    vector<int> findAnagrams(string s, string p) {
        map<char, int > mp; 
        vector<int> ar ;
        if(s.size() < p.size()) {
            return ar ;
        }
                
        for(auto i : p) 
        {
            mp[i]++ ;
        }
        int start= 0 , end = 0 , len = p.size() ;
        while(end < s.size() ) 
        {
            if( mp[s[end++]]-- >= 1) 
            {
                len-- ; 
            }
            if(len == 0 )
            {
                ar.push_back(start);
            }
            if(end - start == p.size()  && mp[s[start++]]++ >= 0)
            {
                len ++ ; 
            }
        }
        return ar ;
    }
    };```