id = 520256385 
lang = golang 
runtime  = 16 ms 
memory = 6.8 MB
title_slug = build-array-from-permutation
code =
 ```func buildArray(nums []int) []int {
    n := make([]int, len(nums))
    
    for index, val := range(nums) {
        n[index] = nums[val]
    }
    
    return n ;
}```