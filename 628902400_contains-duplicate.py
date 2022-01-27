id = 628902400 
lang = python3 
runtime  = 623 ms 
memory = 26 MB
title_slug = contains-duplicate
code =

 class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        st = set({x for x in nums })
        return True if len(st) != len(nums) else False