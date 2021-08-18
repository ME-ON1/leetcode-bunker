id = 483805984 
lang = cpp 
runtime  = 4 ms 
memory = 6.5 MB
title_slug = check-if-the-sentence-is-pangram
code =
 ```class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int> ar(26, 0 ) ;
        
        for(auto i : s ){
            ar[(i - '0')%49] += 1 ;
        }
        
        for(auto i : ar ){
            if(i == 0 ){
                return 0 ;
            }
        }
        return 1 ;
    }
};```