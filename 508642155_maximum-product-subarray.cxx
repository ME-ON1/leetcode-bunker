id = 508642155 
lang = cpp 
runtime  = 416 ms 
memory = 11.7 MB
title_slug = maximum-product-subarray
code =
 ```class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int mx = INT_MIN ;
        int mx = INT_MIN ;
        for(int i =  0; i < nums.size()  ;i++ ) 
        {
            int prev =  1;
            for(int j = i ; j < nums.size() ; j++) 
            {
                    prev *= nums[j] ;
                    if(mx < prev )  
                    {
                        mx = prev ;
                    }
                    // prev *= nums[j ];
            }
        }
        return mx ;
    }
    
    
    int res(vector<int> nums, int n , int index, int pro ){
        if(index >= n){
            return 1 ;
        }
        
        return max(res(nums, n, index + 1, pro * nums[index]) , pro  ) ;
        
    }
};```