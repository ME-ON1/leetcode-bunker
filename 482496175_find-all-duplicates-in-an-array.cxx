id = 482496175 
lang = cpp 
runtime  = 88 ms 
memory = 44.6 MB
title_slug = find-all-duplicates-in-an-array
code =
 ```class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ar ;
        unordered_map<int,int> mp ;
        for(int i = 0; i < nums.size(); i++ ){
            mp[nums[i]]++; 
        }
        for(auto i : mp ) {
            if(i.second > 1) {
                ar.push_back(i.first ) ;
            }
        }
        
        return ar ;
        
    }
};```