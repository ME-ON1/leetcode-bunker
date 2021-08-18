id = 526640156 
lang = cpp 
runtime  = 4 ms 
memory = 6.9 MB
title_slug = maximum-number-of-words-you-can-type
code =
 ```class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int maxWord = 0  ; 
        map<char, int> ar ;
        for ( auto i : brokenLetters)
        {
            ar[i]++; 
        }
        
        stringstream ss(text) ;
        string s ;
        while(ss >> s  )
        {
            int found  = 0 ; 
            for(auto i :s ) 
            {
                if(ar.find(i) != ar.end()) 
                {
                    found = 1; 
                    break ; 
                }
            }
            if(found == 0)
            {
                maxWord++; 
            }
        }
        return maxWord ; 
    }
};```