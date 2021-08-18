id = 520252187 
lang = cpp 
runtime  = 20 ms 
memory = 16.9 MB
title_slug = build-array-from-permutation
code =
 ```class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ar ;

        for(int i =  0 ; i < nums.size( ); i++  )
        {
            ar.push_back(nums[nums[i]]) ;
        } 
        
        return ar; 
    }
};```