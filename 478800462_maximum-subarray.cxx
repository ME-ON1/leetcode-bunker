id = 478800462 
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
            sum += nums[i] ;
            
            if(sum > maxSum ) {
                maxSum = sum ;
            } 
            if(sum < 0 ) {
                sum = 0 ;
            }
        }
        
        return maxSum ;
        return maxSum ; 
    }
};```