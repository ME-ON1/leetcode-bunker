id = 529615205 
lang = cpp 
runtime  = 4 ms 
memory = 6.9 MB
title_slug = check-if-all-characters-have-equal-number-of-occurrences
code =
 ```class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char , int> ar; 
        set<int> st; 
        for(auto i : s) 
        {
            ar[i] ++ ;
        }
        for(auto i:ar) 
        {
            st.insert(i.second) ;            
        }
        
        return st.size() == 1 ;
    }
};```