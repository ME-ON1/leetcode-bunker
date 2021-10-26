id = 577276889 
lang = cpp 
runtime  = 299 ms 
memory = 70.5 MB
title_slug = maximum-subarray
code =

 class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> prefix(nums.size()) ;
        int ans = recurseDC(nums, 0, nums.size() - 1) ;
        
        return ans ;
    }
    
    int recurseDC(vector<int>& nums, int start , int end) 
    {
        if(start > end) 
        {
            return INT_MIN ;
        }
        
        int mid = start + (end - start)/2;
        
        // break in two half 
        // go left contigu
        // or right contigu
        
        int left = recurseDC(nums, start, mid -1) ;
        int right = recurseDC(nums, mid + 1 , end );
        int maxOfMax = INT_MIN , maxNow = 0 ;
        
        for(int i =start; i <= end ; i++ )
        {
            maxNow = max(nums[i], nums[i] + maxNow );
            maxOfMax = max(maxOfMax, maxNow) ;
        }
        
        
        return max(left , max(right , maxOfMax) );
    }
};