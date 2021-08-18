id = 482519761 
lang = cpp 
runtime  = 60 ms 
memory = 33.6 MB
title_slug = find-all-duplicates-in-an-array
code =
 ```class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ar ;
        for(int i = 0 ; i < nums.size(); i++ ) {
            if(nums[abs(nums[i]) - 1 ] <  0) {
                ar.push_back(abs(nums[i])) ;
            }
                nums[abs(nums[i]) - 1] = - nums[abs(nums[i]) -1];
        }
        return ar ;
        
    }
};```