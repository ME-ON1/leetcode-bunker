id = 511889908 
lang = cpp 
runtime  = 32 ms 
memory = 15 MB
title_slug = largest-odd-number-in-string
code =
 ```class Solution {
public:
    string largestOddNumber(string s) {
      for(int i = s.size() - 1  ; i >= 0 ; i-- )   
      {
          if(s[i] - '0' & 1) 
          {
                // cout << i << endl ;
                return s.substr(0 , i +1 ) ;
          }
      }
        
      return "" ;
    }
};```