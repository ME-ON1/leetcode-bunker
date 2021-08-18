id = 500663382 
lang = cpp 
runtime  = 0 ms 
memory = 6.2 MB
title_slug = check-if-word-equals-summation-of-two-words
code =
 ```class Solution {
public:
    
    int gives(string s ){ 
        int ans = 0 ,  cnt = 0 ;
        for(int i  = 0 ; i < s.size() ; i++ )  {
            if(i == 0 && s[i] - 'a' ==  0) {
                continue ; 
            }else {
                cnt = pow (10, s.size() - i -1 ) ;
                // cout << s  << " " << cnt  << endl ;
                ans += cnt * (s[i] - 'a') ;
                cnt  = 0 ;
            }
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