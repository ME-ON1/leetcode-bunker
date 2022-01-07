id = 605920679 
lang = cpp 
runtime  = 92 ms 
memory = 10.4 MB
title_slug = sum-of-subarray-ranges
code =

 class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        long long ans = 0;
        int n = nums.size() ;
        for(int i = 0; i < nums.size( ); i ++ ) { 
            int mx = nums[i] ; 
            int mn = nums[i] ;
            for(int j = i ; j < nums.size(); j++ ) {
                mx = max(mx, nums[j]) ;
                mn = min(mn, nums[j]) ;
                ans += mx - mn ;
            }
        }
        
        return ans ;
    }
};