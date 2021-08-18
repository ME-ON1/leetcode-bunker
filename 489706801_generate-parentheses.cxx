id = 489706801 
lang = cpp 
runtime  = 0 ms 
memory = 13.9 MB
title_slug = generate-parentheses
code =
 ```class Solution {
public:
    vector<string> ar ;
    
    vector<string> generateParenthesis(int n) {
        if(n == 1 ) {
            ar.push_back("()");
            return ar ;
        }  
        getCombination("",  n , 0 , 0 );
        return ar ;
    }
    
    void getCombination(string tmp , int n, int right , int left ) {
        
        if(tmp.size() == 2*n){
            ar.push_back(tmp);
            return ;
        }
        if(right < n  ){   
            getCombination(tmp + "("  , n , right+1,left ) ;     
        }
        
        if(left < right ) {
             getCombination(tmp + ")" , n , right,left+1 ) ;
        }
             
    }
};```