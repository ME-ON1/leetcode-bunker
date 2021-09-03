id = 548278796 
lang = golang 
runtime  = 23 ms 
memory = 7.6 MB
title_slug = array-nesting
code =

 func arrayNesting(nums []int) int {
    n := len(nums) 
    var vis = make([]int, n );

    mx := 0 ; 
    var recurse func(vis *[]int , nums *[]int, index int) int ;
    var max func( x, y int) int ; 
      recurse = func(vis *[]int , nums *[]int, index int ) int  {
          if (*vis)[index] != 1 {
            (*vis)[index] = 1 ; 
            return 1 + recurse(vis, nums,  (*nums)[index] ) ;
        }
        return 0 ; 
    }
    max = func(x , y int ) int  {
        if x > y {
            return x; 
        }
        return y ;
    }
    
    for i , _ := range(nums) {
        if vis[i] != 1  {
            mx = max( mx, recurse(&vis, &nums, i )) ;
        }
    }
    
  
    
    
    return mx ;
}