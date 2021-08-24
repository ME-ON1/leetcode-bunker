id = 542865480 
lang = cpp 
runtime  = 4 ms 
memory = 10.7 MB
title_slug = find-unique-binary-string
code =

 class Solution {
public:
    unordered_map<string , int> mp ;
    string glo = "" ;
    string findDifferentBinaryString(vector<string>& nums) {
        for(auto i : nums ) mp[i] = 0 ;
        recurse("", nums[0].size() ); 
        return glo ;
    }
    
    bool recurse(string s , int k  ) {
        if(k == s.size()) 
        {
        
            if(mp.find(s) == mp.end()) 
            {
                glo = s ;
                return true ;
            }
            return false;
        }
        s += '0' ;
        if (recurse(s , k )) 
            return true ;
        s.pop_back() ;
        s +='1' ;
        if (recurse(s,  k )) {
            return true ;
        }
        return false ;
    }
};