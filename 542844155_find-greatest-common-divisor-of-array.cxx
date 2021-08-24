id = 542844155 
lang = cpp 
runtime  = 8 ms 
memory = 12.4 MB
title_slug = find-greatest-common-divisor-of-array
code =

 class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        
        return __gcd(nums[0], nums[nums.size() -1 ])  ;
    }
};