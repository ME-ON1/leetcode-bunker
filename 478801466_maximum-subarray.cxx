id = 478801466 
lang = cpp 
runtime  = 4 ms 
memory = 13.2 MB
title_slug = maximum-subarray
code =
 ```class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = -100000 ;
        int sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            // sum += nums[i] ;
            sum = max( nums[i] , sum + nums[i] ) ;
            maxSum = max(maxSum, sum) ; 
        }
        
        return maxSum ;
    }
};```