id = 630243581 
lang = cpp 
runtime  = 3 ms 
memory = 7.2 MB
title_slug = reverse-words-in-a-string
code =

 class Solution {
public:
    string reverseWords(string s) {
        bool flag = false ;
        string tmp = "", ans = "" ;
        for(int i = s.size() - 1; i >= 0 ; i-- ) {
            if(s[i] != ' ') 
            {
                tmp += s[i] ;
                flag = true ;
            } else 
            {
                if(flag)
                {
                    reverse(tmp.begin(), tmp.end() ) ;
                    if(ans.size() == 0 ) {
                        ans += tmp ;
                    } else {
                        ans += " ";
                        ans += tmp ;
                    }
                    tmp = "" ;
                    flag = false ;
                }
            }
        }
        
        if(flag ) {
            reverse(tmp.begin(), tmp.end()) ;
            if(ans.size() == 0)
            {
                ans += tmp ;
            } else {
                ans += " ";
                ans += tmp;
            }
        }
        return ans ;
    }
};