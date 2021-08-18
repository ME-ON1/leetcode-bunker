id = 502348112 
lang = cpp 
runtime  = 8 ms 
memory = 6.2 MB
title_slug = substrings-of-size-three-with-distinct-characters
code =
 ```class Solution {
public:
    int countGoodSubstrings(string s) {
        // set<string> st;
        int cnt  = 0 ;
        if(s.size() < 3) {
            return 0 ;
        }
        for(int i = 0 ; i < s.size() - 2 ; i++ ) {

            string r = s.substr(i, 3 ) ;
            if(r[0] != r[1] && r[1] != r[2] && r[2] != r[0]){
                cnt++ ;
                cout << r << endl ; 
            }
        }
        // return st.size() ;
        return cnt ; 
    }
};```