id = 521954329 
lang = cpp 
runtime  = 8 ms 
memory = 10.6 MB
title_slug = minimum-size-subarray-sum
code =
 ```class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mn = INT_MAX ; 
        
        int lo = 0, hi = 0 ; 
        int sum = nums[lo];
        while(hi < nums.size()) 
       {
                // cout << hi << " " << lo << " " << 
            if(sum < target ) 
            {
                hi++; 
                if(hi == nums.size())
                {
                    break ;
                }
                sum += nums[hi] ;
            }else {
                mn = min(mn, abs(hi - lo + 1 ) ) ;
                sum -= nums[lo++ ] ;
                if(lo > hi ) 
                {
                    hi = lo ; 
                }
            }
        }
        cout << mn << "  " << INT_MAX << endl ;
        
        if(mn == INT_MAX ) 
        {
            return 0 ;
        }
        return mn ; 
    }
};```