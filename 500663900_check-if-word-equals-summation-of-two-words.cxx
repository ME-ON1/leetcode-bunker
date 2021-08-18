id = 500663900 
lang = cpp 
runtime  = 0 ms 
memory = 6.1 MB
title_slug = check-if-word-equals-summation-of-two-words
code =
 ```class Solution {
public:
    
    int gives(string s ){ 
        int ans = 0 ;
        for(int i  = 0 ; i < s.size() ; i++ )  {
            // if(i == 0 && s[i] - 'a' ==  0) {
            //     continue ; 
            // }else {
                // cnt = ;
                ans += pow (10, s.size() - i -1 )  * (s[i] - 'a') ;
                // cnt  = 0 ;
            // }
        }
        
        return ans ;
            
            
            
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a = gives(firstWord ); 
        int b = gives(secondWord) ;
        int c = gives(targetWord) ;
        // cout << a << " " << b << " " <<  c << endl ;
        return a + b == c ; 
        // return a +  ;
    }
};```