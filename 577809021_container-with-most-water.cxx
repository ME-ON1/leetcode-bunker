id = 577809021 
lang = cpp 
runtime  = 80 ms 
memory = 58.9 MB
title_slug = container-with-most-water
code =

 class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0 ;
        int left = 0, right = height.size() - 1 ;
        while(left < right )
        {
            res = max(res, (right - left) * min(height[left], height[right]));
            
            height[left] > height[right] ? right-- : left++ ;
        }
        return  res ; 
    }
};