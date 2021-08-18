id = 482265770 
lang = cpp 
runtime  = 44 ms 
memory = 19.5 MB
title_slug = majority-element
code =
 ```class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        return nums[nums.size()/2] ;
    }
};```