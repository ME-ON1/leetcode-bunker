id = 478402467 
lang = cpp 
runtime  = 20 ms 
memory = 16.8 MB
title_slug = single-number
code =
 ```class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum =  0 ;
        for(int i = 1 ; i < nums.size() ; i++ ) {
            nums[i] ^= nums[i-1] ;
        }
        
        return nums[nums.size() -1] ;
     }
    
};```