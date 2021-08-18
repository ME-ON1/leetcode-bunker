id = 478400057 
lang = cpp 
runtime  = 20 ms 
memory = 16.9 MB
title_slug = single-number
code =
 ```class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0 ;
        for(auto i : nums) {
            ans ^= i ; 
        }
        return ans ;
     }
};```