id = 482466430 
lang = cpp 
runtime  = 32 ms 
memory = 25 MB
title_slug = product-of-array-except-self
code =
 ```class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(), 1) ;
        
        vector<int> right(nums.size(), 1) ;
        
        for(int i = 1 ; i < nums.size(); i++ ){
            left[i] = left[i-1] * nums[i-1] ;
            right[nums.size() - i -1] = right[nums.size() - i] * nums[nums.size() - i ]; 
        }
        
        
        for(int i = 0 ; i < nums.size() ;i++ ) {
            nums[i] = left[i] * right[i] ;
        }
        
        return nums; 
    }
};```