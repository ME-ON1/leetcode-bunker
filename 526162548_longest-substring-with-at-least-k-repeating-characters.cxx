id = 526162548 
lang = cpp 
runtime  = 20 ms 
memory = 6.7 MB
title_slug = longest-substring-with-at-least-k-repeating-characters
code =
 ```class Solution {
public:
    int longestSubstring(string s, int k) {
        map<char,int > mp ;
        
        for(auto i : s) 
        {
            mp[i]++ ;
        }
        // delete mp ;
        int uniq_count = mp.size(); 
        int mx = 0  ; 
        for(int i = 1; i <= uniq_count; i++ ) // i == uniq_char 
        {
            unordered_map<char , int> ar; 
            int lo = 0, hi = 0 ; 
            int uniq = 0, k_Strings= 0; 
            while(hi < s.size())
            {
                if(uniq <= i ) 
                {
                    if(ar[s[hi]] == 0 )  uniq++ ;//uniq 
                    ar[s[hi] ] ++ ;
                    if(ar[s[hi]] == k) k_Strings ++;
                    hi++ ;
                }
                else 
                {
                    if(ar[s[lo]] == k ) k_Strings -- ;
                    ar[s[lo]] -- ;
                    if(ar[s[lo]] == 0 ) uniq-- ;
                    lo++;
                }
                if(uniq == i && k_Strings == uniq )
                {
                    mx = max(mx, hi - lo ) ;
                }
            }
        }
        return mx ;
    }
};```