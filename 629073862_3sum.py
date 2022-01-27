id = 629073862 
lang = python3 
runtime  = 1385 ms 
memory = 18.1 MB
title_slug = 3sum
code =

 class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        
        newList= []
        for i in range(len(nums) - 1) :
            if i > 0 and nums[i] == nums[i- 1] :
                continue 
            start , end = i + 1, len(nums) -1 
            
            while start < end :
                su = nums[start] + nums[end] + nums[i]
                if su == 0:
                    newList.append([nums[start], nums[end ], nums[i]])
                    start += 1
                    end -= 1
                    while start < end and nums[start] == nums[start-1]:
                        start += 1
                    while start < end and nums[end] == nums[end + 1] :
                        end -= 1 
                elif su > 0 :
                    end -= 1
                else:
                    start += 1
        
        
        return newList
        