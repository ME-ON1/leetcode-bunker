id = 628901933 
lang = python3 
runtime  = 530 ms 
memory = 26.1 MB
title_slug = contains-duplicate
code =

 class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        st = set()
        
        for val in nums:
            st.add(val)
            
        return True if len(st) != len(nums) else False