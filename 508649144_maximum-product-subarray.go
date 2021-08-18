id = 508649144 
lang = golang 
runtime  = 88 ms 
memory = 2.8 MB
title_slug = maximum-product-subarray
code =
 ```func maxProduct(nums []int) int {
    mx := -62000000 
    
    for i := 0 ; i < len(nums); i++ {
        prev := 1 
        for j := i ; j < len(nums); j++ {
            prev *= nums[j]
            if mx < prev  {
                mx = prev 
            }
        }
    }
    
    return mx 
}```