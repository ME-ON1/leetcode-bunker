id = 482264088 
lang = cpp 
runtime  = 20 ms 
memory = 19.7 MB
title_slug = majority-element
code =
 ```class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp ;
        for(auto i : nums) {
            mp[i]++ ;
        }
        int d = 0 ; 
        int max = -1 ;
        for(auto i : mp ){
            if(i.second > max) 
            {
                max = i.second;
                d  = i.first ;
            }
        }
        
        return d ;
    }
};```