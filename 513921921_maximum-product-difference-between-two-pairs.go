id = 513921921 
lang = golang 
runtime  = 36 ms 
memory = 6.5 MB
title_slug = maximum-product-difference-between-two-pairs
code =
 ```func maxProductDifference(nums []int) int {
    sort.Ints(nums) 
    n := len(nums)  - 1
    return nums[n] * nums[n - 1]  - nums[0] * nums[1]
}```