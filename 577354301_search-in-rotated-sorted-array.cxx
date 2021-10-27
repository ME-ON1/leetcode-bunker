id = 577354301 
lang = cpp 
runtime  = 18 ms 
memory = 11 MB
title_slug = search-in-rotated-sorted-array
code =

 class Solution {
public:
    
    // binary search is search on sorted side 
    int search(vector<int>& nums, int target) {
        int start =  0, end = nums.size() - 1; 
        
        while(start <= end ) 
        {
            int mid = start + (end - start )/2 ;
            if (nums[mid] == target) 
            {
                return mid;
            }
            if (nums[start] <= nums[mid ]) 
            {
                if(target <= nums[mid] && target >= nums[start])
                {
                    end = mid - 1 ;
                }else 
                {
                    start = mid + 1 ;
                }
            }
            else {
                if (target >= nums[mid] && target <= nums[end])
                {
                    start = mid + 1 ;
                }
                else 
                {
                    end = mid - 1 ;
                }
            }
        }
        
        return -1 ;
    }
};