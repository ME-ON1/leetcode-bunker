id = 577268671 
lang = golang 
runtime  = 182 ms 
memory = 10 MB
title_slug = maximum-subarray
code =

 func maxSubArray(nums []int) int {
    maxNow , maxofMax := 0 ,math.MinInt32; 
    
    for i := 0; i < len(nums) ; i++ {
        maxNow += nums[i] ;
        if maxNow > maxofMax {
            maxofMax = maxNow
        }
        if maxNow < 0 {
            maxNow = 0 
        }
    }
    
    return maxofMax ;
}