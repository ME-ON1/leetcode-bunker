id = 546152306 
lang = golang 
runtime  = 16 ms 
memory = 5.2 MB
title_slug = minimum-difference-between-highest-and-lowest-of-k-scores
code =

 func minimumDifference(nums []int, k int) int {
    if len(nums) == 1 {
        return 0 ;
    }
    
    sort.Ints(nums) ;
    
    mn := nums[k-1] - nums[0] ;
    
    for i := k ; i < len(nums) ; i++ {
        mn = min(mn , nums[i] - nums[i -k + 1]) ; 
    }
    return mn ;
}

func min (x, y int) int {
    if x < y {
        return x ;
    } else {
        return y ;
    }
}