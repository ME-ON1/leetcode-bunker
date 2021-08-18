id = 477551096 
lang = cpp 
runtime  = 16 ms 
memory = 17.9 MB
title_slug = missing-number
code =
 ```class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int realSum = (nums.size()* (nums.size() +1) )/2 ;
        int sum = 0; 
        for(auto i : nums) {
            sum += i ;
        }
        return realSum - sum ;
    }
};```