id = 621647863 
lang = cpp 
runtime  = 31 ms 
memory = 14.7 MB
title_slug = count-number-of-pairs-with-absolute-difference-k
code =

 class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int, int> mp ;
        int cnt = 0 ;
        for(int i = 0; i < nums.size() ;i++) {
            cnt += mp[ k + nums[i]] ;
            cnt += mp[nums[i] - k ] ;
            mp[nums[i]] ++ ;
        }
        
        return cnt ;
    }
};