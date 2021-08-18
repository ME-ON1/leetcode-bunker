id = 502876220 
lang = cpp 
runtime  = 0 ms 
memory = 7.9 MB
title_slug = house-robber-ii
code =
 ```class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size() == 0 ) 
        {
            return 0 ;
        }else if(nums.size() == 1) 
        {
            return nums[0] ;
        }else if(nums.size() == 2) 
        {
            return max(nums[1], nums[0]) ;
        }else 
        {
            // vector<int> robFirst(nums.size() + 1, -1 ), robEnd(nums.size()  +1, -1); 
                    
            return max(res(nums, nums.size() - 2, 0), res(nums, nums.size() -1, 1 )) ;  
            
            
            // return max(a, b) ;
        }           
    }
    
    
    int res(vector<int> nums, int end , int index)
    {
        // vector<int> state(end+1, -1 ) ; 
        int prev = 0 , cur = 0 ; 
        for(int i = index; i <= end ; i++ )
        {
            int temp = max( prev + nums[i], cur ) ;
            prev = cur ;
            cur = temp ;
        }
        
        return cur ;
    }
};```