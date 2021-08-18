id = 482273136 
lang = cpp 
runtime  = 28 ms 
memory = 16 MB
title_slug = majority-element-ii
code =
 ```class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i : nums ) {
            mp[i]++ ;
        }
        vector<int> ar ;
        int d = 0 ;
        int max = -1 ;
        
        for(auto i : mp ){
            if(i.second > nums.size() / 3  ) {
                ar.push_back(i.first) ;
            }
        }
        
        return ar ;
    }
};```