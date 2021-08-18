id = 522555713 
lang = cpp 
runtime  = 944 ms 
memory = 15.3 MB
title_slug = longest-substring-with-at-least-k-repeating-characters
code =
 ```class Solution {
public:
    int longestSubstring(string s, int k) {
        int mx = INT_MIN ;
        for(int i = 0 ; i < s.size()  ; i++) 
        {
            map<char , int> mp ;
            for(int j = i  ; j < s.size()  ; j ++  )    
            {
                mp[s[j]]++ ;
                if(hasMore(mp, k)) 
                {
                    mx = max(mx, j - i + 1  ) ;
                }
            }
        }
        cout << mx << endl ;
        return  mx == INT_MIN  ? 0 : mx; 
    }
    
    
    bool hasMore(map<char, int>&mp , int target) 
    {
        for(auto i : mp) 
        {
            // cout << i.first << " " << i.second << endl ;
            if(i.second < target )
                return false; 
        }
        return true ;
    }
};```