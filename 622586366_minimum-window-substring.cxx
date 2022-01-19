id = 622586366 
lang = cpp 
runtime  = 59 ms 
memory = 16.3 MB
title_slug = minimum-window-substring
code =

 class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> mp;
        for(auto i : t) {
            mp[i]++; 
        }
        int count_mp_zeros = mp.size() ;
        int ans = INT_MAX ;
        string shortest_str = "" ; 
        int i = 0, j = 0 ; 
        // if(t.size() )
        
        while( j < s.size() ) {    
            if(mp.find(s[j]) != mp.end()) {
                mp[s[j]] --; 
                if(mp[s[j]] == 0 ){
                    count_mp_zeros-- ;
                }
            }
            while(count_mp_zeros == 0 ){
                if(ans > j - i + 1) {
                    ans = min(ans, j - i + 1) ;
                    cout << ans << endl;
                    shortest_str = s.substr(i, ans ) ;
                }
                if(mp.find(s[i]) != mp.end()) {
                    mp[s[i]]++ ;
                    if(mp[s[i] ] == 1 )
                        count_mp_zeros++ ;
                }
                i++; 
            }
            j++ ;
        }
        return shortest_str;        
    }
};