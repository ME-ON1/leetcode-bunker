id = 502848513 
lang = cpp 
runtime  = 4 ms 
memory = 11.1 MB
title_slug = house-robber-ii
code =
 ```class Solution {
public:
    int rob(vector<int>& nums) 
    {
        vector<int> ar(nums.size() , -1) , pr(nums.size() , -1) ; 
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
            int n = max(res(nums, nums.size() - 1 , 0 ,ar ), res(nums, nums.size()   , 1, pr ));                    
            
            // for(auto i : ar) {
            //     cout << i << " " ;
            // }
            // cout << endl; 
            // for(auto i : ar) { 
            //     cout << i << " " ;
            // }
            // cout << endl ;
            return n;
        }           
    }
    
    
    int res(vector<int> nums, int end , int index, vector<int>& ar)
    {
        if(index >= end  )
        {
            // cout << end << " " << index << endl ;
            return 0 ;
        }
        
        if(ar[index] != -1 ) return ar[index] ;
        
        int ans = max(nums[index] + res(nums, end , index + 2, ar ), res(nums, end , index + 1, ar )) ;
        ar[index] = ans ;
        return ans ;  
    }
};```