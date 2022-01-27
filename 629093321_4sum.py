id = 629093321 
lang = python3 
runtime  = 3219 ms 
memory = 13.9 MB
title_slug = 4sum
code =

 class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        
        newList = set()
        if len(nums) < 4 :
            return [] 
        
        for i in range(len(nums) ):
            for j in range(i+ 1, len(nums) ) :
                start , end = j + 1 , len(nums) - 1 
                
                while start < end:
                    target_g = nums[start] + nums[end ] + nums[j] + nums[i] 
                    
                    if target_g == target :
                        newList.add((nums[start], nums[end ], nums[j], nums[i]))
                        start += 1
                        end -= 1
                    elif target_g > target :
                        end -= 1
                    else:
                        start += 1
        # ar = [x for x in newList]
        
        return newList
                        