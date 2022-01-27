id = 628919010 
lang = python3 
runtime  = 709 ms 
memory = 23.4 MB
title_slug = product-of-array-except-self
code =

 class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix_arr = [0] * len(nums)
        suff_arr = [0] * len(nums)
        
        prefix_arr[0] = (nums[0])
        suff_arr[len(nums) - 1] = nums[len(nums) - 1]
        
        for i in range(1,len(nums)):
            print(prefix_arr[i], nums[i])
            prefix_arr[i] = prefix_arr[i-1] * nums[i]
            
            
        for i in range(len(nums) - 2 , -1, -1 ):
            suff_arr[i] = suff_arr[i+1] * nums[i] 
        
        ansList = []
        for i in range(len(prefix_arr)) :
            if i == 0 : 
                ansList.append(suff_arr[i+1])
            elif i == len(prefix_arr) - 1:
                ansList.append(prefix_arr[i-1]) 
            else:
                ansList.append(prefix_arr[i-1] * suff_arr[i+1])
         
        return ansList