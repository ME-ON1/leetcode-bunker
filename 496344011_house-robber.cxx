id = 496344011 
lang = cpp 
runtime  = 0 ms 
memory = 7.8 MB
title_slug = house-robber
code =
 ```class Solution {
public:
    vector<int> cache ; 
    int rob(vector<int>& nums) {
        cache.resize(nums.size() ) ;
        std::fill(cache.begin() , cache.end() , -1 ) ;
        
        int num = robCount(nums ,  0) ;
        return num ;
    }
    
    int  robCount(vector<int>  & nums, int index   )
    {
        if( index >= nums.size() ) { 
            return 0 ;
        }
        if(cache[index ] != -1 ) {
            return cache[index] ;
        }
        
        int res =  max (robCount(nums, index + 2) + nums[index] , robCount(nums,index + 1)) ;
        
        cache[index] = res ;
        
        return cache[index] ;
    }
    
};```