id = 539989449 
lang = cpp 
runtime  = 204 ms 
memory = 122.3 MB
title_slug = array-with-elements-not-equal-to-average-of-neighbors
code =

 class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        for(int i = 1 ; i < nums.size() - 1; i++ ) 
        {
            if(2*nums[i] == nums[i-1] + nums[i+1] ) 
            {
               swap(nums[i], nums[i+1]) ;
            }
        }
        
        for(int i = nums.size() - 2;  i >= 1 ; i--) 
        {
            if(2*nums[i] == nums[i-1] + nums[i+1])
            {
                swap(nums[i], nums[i-1]);
            }
        }
        
        
        return nums ;
    }
};