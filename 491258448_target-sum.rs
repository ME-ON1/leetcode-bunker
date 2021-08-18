id = 491258448 
lang = rust 
runtime  = 336 ms 
memory = 2.2 MB
title_slug = target-sum
code =
 ```impl Solution {
     
    pub fn find_target_sum_ways(nums: Vec<i32>, target: i32) -> i32 {
     fn getcombine(nums : &Vec<i32> , target: i32 , index : usize , sum : i32, res : &mut i32 ){
        if index == nums.len() {
            if sum == target {
                *res += 1 ;
            } 
            return ;
        }
        
        getcombine(nums, target, index + 1 ,sum - nums[index],res ) ;
        getcombine( nums , target , index + 1 , sum + nums[index ], res ) ;   
    }
        let res = &mut 0i32  ;
        getcombine(&nums, target , 0 ,0,res   ) ;
        return *res ;
    }
    
    
  
}```