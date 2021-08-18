id = 487018655 
lang = cpp 
runtime  = 32 ms 
memory = 11.5 MB
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
        
        char c = s[index] ;
        
        cout << c << " " << index << endl ;
        
        if(isalpha(c)) {
            getpermutation(s, index +1 , arr , out + toggle(c))  ;
            
            getpermutation(s, index + 1 , arr , out + c ) ;
        }else {
            getpermutation(s, index + 1 , arr , out + c ) ;
        }
        
    }
};```