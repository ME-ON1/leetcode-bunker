id = 480117331 
lang = cpp 
runtime  = 32 ms 
memory = 27.6 MB
title_slug = binary-search
code =
 ```class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 , r = nums.size() -1 ;
        
        while(l <= r) {
            int m = l + (r - l ) /2 ;
            if(target == nums[m]) {
                return m ;
            }
            if(target < nums[m]) {
                r = m -1 ; 
            }else {
                l = m + 1;
            }
        }
        
        return -1 ;
    }
};```