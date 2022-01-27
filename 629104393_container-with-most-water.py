id = 629104393 
lang = python3 
runtime  = 764 ms 
memory = 27.5 MB
title_slug = container-with-most-water
code =

 class Solution:
    def maxArea(self, height: List[int]) -> int:
        left , right = 0, len(height) - 1
        ans = 0
        while left < right  :
            
            ans = max(ans , (right - left ) * (min(height[right], height[left])))
            
            if height[left] < height[right] :
                left+=1
            else:
                right -= 1
        return ans 
            