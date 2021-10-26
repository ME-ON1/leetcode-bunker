id = 577267638 
lang = golang 
runtime  = 124 ms 
memory = 9.8 MB
title_slug = maximum-subarray
code =

 func maxSubArray(nums []int) int {
    maxNow , maxofMax := 0 ,math.MinInt32; 
    
    for _, val := range(nums) {
        maxNow += val ;
        if maxNow > maxofMax {
            maxofMax = maxNow
        }
        if maxNow < 0 {
            maxNow = 0 
        }
    }
    
    return maxofMax ;
}