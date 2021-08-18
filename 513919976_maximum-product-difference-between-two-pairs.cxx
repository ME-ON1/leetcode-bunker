id = 513919976 
lang = cpp 
runtime  = 28 ms 
memory = 20.4 MB
title_slug = maximum-product-difference-between-two-pairs
code =
 ```class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int n = nums.size() ;
        return nums[n -1 ] * nums[n - 2] - nums[0] * nums[1] ;
    }
};```