id = 477097639 
lang = cpp 
runtime  = 0 ms 
memory = 13.4 MB
title_slug = generate-parentheses
code =
 ```class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> str; 
        backtrack(str,n, "" , 0 ,0 ) ;
        
        return str ;
    }
    
    void backtrack(vector<string>& str , int max, string s ,int open , int close ){
        
        if(s.size() == max * 2) {
            str.push_back(s); 
            return ;
        }
        
        if(open < max) backtrack(str, max ,s+ "(", open+1, close);
        
        if(close < open) backtrack(str, max, s + ")", open , close + 1);
    }
};```