id = 482471928 
lang = cpp 
runtime  = 24 ms 
memory = 23.9 MB
title_slug = product-of-array-except-self
code =
 ```class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size()) ;
        left[0] = 1 ;
        for(int i = 1 ; i < nums.size();i++ ) {
            left[i] = left[i-1] * nums[i-1] ;
        }
        int rp =  1 ;
        for(int i = nums.size() -1  ; i >= 0 ; i-- ){
            left[i] = left[i]*rp ; 
            rp = rp * nums[i];
        }
        
        return left ; 
    }
};```