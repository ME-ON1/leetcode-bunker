id = 477183175 
lang = cpp 
runtime  = 0 ms 
memory = 6.4 MB
title_slug = letter-combinations-of-a-phone-number
code =
 ```class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> s = {"","", "abc","def","ghi","jkl","mno","pqrs", "tuv","wxyz"} ;
        vector<string> out ;
        if(digits.size() ==  0){
            return out ;
        }
        backtrack(s , "" ,digits, 0, out ) ;
        return out ;
    }
    
    
    void backtrack(vector<string>& str, string curr ,string digits ,int index , vector<string> &out ){
        if(index >= digits.size()) {
            // cout << curr << " " << index << endl ;
            
            out.push_back(curr) ;
            return ; 
        }
        string p = str[digits[index] - '0'] ;
        for(int i = 0; i < p.size(); i++ ) {
         backtrack(str, curr + p[i], digits, index+ 1, out) ;   
        }
            
    }
};```