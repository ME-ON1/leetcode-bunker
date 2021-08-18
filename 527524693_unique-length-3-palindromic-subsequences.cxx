id = 527524693 
lang = cpp 
runtime  = 996 ms 
memory = 13.3 MB
title_slug = unique-length-3-palindromic-subsequences
code =
 ```class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<pair<int,int> > mp(26, {INT_MAX , -1 }); 
        for(int i = 0 ; i < s.size() ; i++ )
        {
                mp[s[i] - 'a'].first =  min(mp[s[i] - 'a'].first , i ) ;
                mp[s[i] - 'a'].second = max(mp[s[i] - 'a'].second , i) ;
        }
        int cnt  = 0 ;
        for(auto i : mp ) 
        {
                set<char> st; 
            
            if(i.first != INT_MAX ) 
                for(int start = i.first + 1 ; start < i.second ; start++ )
                {
                    // string p ;
                    // p = s[i.first] + s[start] + s[i.second ];
                    st.insert(s[start]) ;
                }
            cnt  += st.size() ;
        }
        return cnt  ;
    }
};```