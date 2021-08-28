id = 545078146 
lang = cpp 
runtime  = 3 ms 
memory = 10.4 MB
title_slug = find-unique-binary-string
code =

 class Solution {
public:
    unordered_map<string , int> mp ;
    string glo = "" ;
    string findDifferentBinaryString(vector<string>& nums) {
        for(auto i : nums ) mp[i] = 0 ;
        recurse(nums[0], 0 ); 
        return glo ;
    }
    
    void recurse(string s , int ind  ) {
        if (mp.find(s ) == mp.end( )) {
            glo = s ;
            cout << s << " " << glo << endl ;
            return ;
        }
        // cout << s << endl ;
        for(int i = ind ; i < s.size() ; i++ ) 
        {
            s[i] == '0' ? s[i] = '1' : s[i] = '0' ;
            recurse(s, i + 1) ;
            if (glo.size() > 0 ) {
                return;
            }
            
        }
        
        return;
    }
};