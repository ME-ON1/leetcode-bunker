id = 577375452 
lang = cpp 
runtime  = 76 ms 
memory = 21.3 MB
title_slug = 3sum
code =

 class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ar;
        sort(nums.begin(), nums.end()) ;        
        int n = nums.size() ;
        
        for(int i = 0 ; i < n - 2; i++ ) 
        {
            
            if (i > 0 and nums[i - 1 ] == nums[i])
            {
                continue;
            }
            int j = i + 1 , k = n - 1;
            
            // int target = nums[i] ;
            // two pointers
            // vector<int> tmp ;
            while( j < k )
            {
                int target = nums[i] + nums[j] + nums[k] ;
                if (target == 0 )
                {
                    vector<int> tmp{nums[i], nums[j], nums[k]} ;
                    ar.push_back(tmp) ;
                    j++ , k-- ;
                 
                    // remove repition        
                    while(j < k && nums[j] == nums[j-1])
                    {
                        j++; 
                    }
                    while(j < k && nums[k] == nums[k + 1 ] )
                    {
                        k--; 
                    }
                } else if (target < 0) 
                {
                    j++ ;
                }
                else 
                {
                    k-- ;
                }   
            }
        }
        return ar; 
    }
};