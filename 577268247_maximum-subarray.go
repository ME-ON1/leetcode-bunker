id = 577268247 
lang = golang 
runtime  = 100 ms 
memory = 9.6 MB
title_slug = maximum-subarray
code =

 func maxSubArray(nums []int) int {
    maxNow , maxofMax := 0 ,math.MinInt32; 
    
    for i,_ := range(nums) {
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