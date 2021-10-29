id = 578883656 
lang = cpp 
runtime  = 0 ms 
memory = 6.4 MB
title_slug = minimum-moves-to-convert-string
code =

 class Solution {
public:
    int minimumMoves(string s) {
        int cnt  = 0 ;
        for(int i = 0; i < s.size()  ; i++) 
        {
            if ( s[i] == 'X' )
            {
                s[i] = 'O'; 
                i += 2;
                cnt ++ ;
            }
        }
        
        return cnt ;
    }
};