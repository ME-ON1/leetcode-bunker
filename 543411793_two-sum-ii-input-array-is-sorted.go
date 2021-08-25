id = 543411793 
lang = golang 
runtime  = 4 ms 
memory = 3 MB
title_slug = two-sum-ii-input-array-is-sorted
code =

 func twoSum(num []int, target int) []int {
    left , right := 0 , len(num)  -1 ; 
    
    var ar []int
    
    for ; left < right ; {
        if num[left] + num[right] == target  {
            ar = append(ar, left + 1);
            ar = append(ar, right + 1 ) ;
            return ar ;
        }else if num[left] + num[right ] > target {
            right--; 
        } else if num[left ] + num[right ] < target {
            left++; 
        }
    }
    
    return ar ;
}