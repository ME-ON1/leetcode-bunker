id = 558708461 
lang = cpp 
runtime  = 36 ms 
memory = 27.5 MB
title_slug = binary-search
code =

 class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0 , right = nums.size() - 1; 
        while(left <= right ) 
        {
            int p = ( left + right ) >> 1; 
            if (nums[p] == target )
            {
                return p ; 
            }else if (target < nums[p])
            {
                right = p -1;
            }else {
                left = p + 1;
            }
        }
        
        return -1 ;
    }
};