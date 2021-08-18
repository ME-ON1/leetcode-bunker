id = 487018869 
lang = cpp 
runtime  = 8 ms 
memory = 11.3 MB
title_slug = letter-case-permutation
code =
 ```class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> arr ;
        int index = 0 ;
        getpermutation(s, index, arr ,  "");
        
        return arr ; 
    }
    
    char  toggle(char s ) {
        return islower(s) ? toupper(s) : tolower(s) ;  
    }
    
    void getpermutation(string s, int index , vector<string> &arr, string out){
        if(index == s.size()) {
            arr.push_back(out) ;
            return ;
        }
    
        
        if(isalpha(s[index])) {
            getpermutation(s, index +1 , arr , out + toggle(s[index]))  ;
            
            getpermutation(s, index + 1 , arr , out + s[index] ) ;
        }else {
            getpermutation(s, index + 1 , arr , out +s[index ]) ;
        }
        
    }
};```