id = 577324702 
lang = cpp 
runtime  = 17 ms 
memory = 10.3 MB
title_slug = find-minimum-in-rotated-sorted-array
code =

 class Solution {
public:
    int findMin(vector<int>& nums) {
        int start  = 0 , end = nums.size() - 1;
                
        while( start < end )
        {
            int mid = start + (end - start ) /2 ;
            
            if (nums[mid] > nums[end]) 
            {
                start = mid + 1  ;
            }else {
                end = mid  ;
            }
        }
        
        return nums[start] ;
    }
};