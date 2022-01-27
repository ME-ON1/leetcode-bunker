id = 628897091 
lang = python3 
runtime  = 995 ms 
memory = 26.2 MB
title_slug = contains-duplicate
code =

 class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        for i in range(len(nums) - 1):
            if nums[i] == nums[i+1]:
                return True
            
            
        return False 