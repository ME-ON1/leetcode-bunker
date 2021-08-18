id = 482265865 
lang = cpp 
runtime  = 12 ms 
memory = 19.6 MB
title_slug = majority-element
code =
 ```class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        return nums[nums.size()/2] ;
    }
};```