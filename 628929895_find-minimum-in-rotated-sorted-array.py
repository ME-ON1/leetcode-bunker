id = 628929895 
lang = python3 
runtime  = 68 ms 
memory = 14.2 MB
title_slug = find-minimum-in-rotated-sorted-array
code =

 class Solution:
    def findMin(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        if nums[0] < nums[len(nums) - 1] :
            return nums[0]
        left , right = 0, len(nums) - 1 
        while left < right :
            mid = left + (right - left ) // 2 
            if nums[mid - 1] > nums[mid] :
                 return nums[mid]
            if nums[mid] > nums[mid + 1] :
                return nums[mid+ 1]
            if nums[mid ] > nums[0] :
                left = mid + 1
            else :
                right = right - 1
        return -1
            