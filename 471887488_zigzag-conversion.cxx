id = 471887488 
lang = cpp 
runtime  = 8 ms 
memory = 10.7 MB
title_slug = zigzag-conversion
code =
 ```class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 ) {
            return s ;
        }
        
        vector<string> ar(min(int(s.size()), numRows)) ;
        int flag = 0;
        int row = 0 ;
            
        for(int i = 0; i< s.size(); i++ ) {
            ar[row] += s[i] ;
            if(row ==0 || row == numRows - 1 ) {
                flag = !flag ;
            }
            
            row += flag ? 1 : -1 ;
        }
        string res ;
        for(string i : ar) {
            res += i ;
        }
        cout << res ;
        return res ;
    }
};```