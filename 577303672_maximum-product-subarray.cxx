id = 577303672 
lang = cpp 
runtime  = 9 ms 
memory = 11.7 MB
title_slug = maximum-product-subarray
code =

 class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxNow = nums[0] , maxOfMax= maxNow  ; 
        int minNow = nums[0] ;
        for(int i= 1; i < nums.size() ; i++ )
        {
            int tmp = max(nums[i], max(nums[i]*minNow , nums[i]*maxNow)) ;
            minNow = min(nums[i], min(maxNow*nums[i], minNow*nums[i]));

            maxNow = tmp ;             
            maxOfMax = max(maxOfMax, max(minNow, maxNow) ) ;
        }
        
        return maxOfMax ;
    }
};