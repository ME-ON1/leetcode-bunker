id = 549837846 
lang = golang 
runtime  = 0 ms 
memory = 2.5 MB
title_slug = next-permutation
code =

 func nextPermutation(nums []int)  {
    decre_break :=  -1 
    for i := len(nums) - 2 ;  i >= 0 ; i-- {
        if nums[i] < nums[ i+ 1] {
            decre_break = i ; 
            break ;
        }
    }

    if decre_break != -1  {
        min := - 1;
        
        for i :=  decre_break ;i < len(nums) ; i++ {
            if nums[i] > nums[decre_break] {
                if min == -1 || nums[i] <= nums[ min  ] {
                    min = i ;
                }        
            } 
            
         }    

        nums[decre_break], nums[min] = nums[min] , nums[decre_break] 
    }

    
    left , right := decre_break +1  , len(nums) -1  ;     
    
    for  left < right  {
        nums[right], nums[left] = nums[left] , nums[right] ;
        right-- ;
        left++ ;
    }
    
    return ;
}