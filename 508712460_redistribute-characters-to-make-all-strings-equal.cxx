id = 508712460 
lang = cpp 
runtime  = 24 ms 
memory = 12.5 MB
title_slug = redistribute-characters-to-make-all-strings-equal
code =
 ```class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char ,int> mp;
        
        for(auto i : words)  {
            for(auto j : i  ) {
                mp[j]++; 
            }
        }
        
        for(auto i: mp) {
            if( i.second % words.size() != 0){
                return false; 
            }
        }
        return true ;
    }
};```