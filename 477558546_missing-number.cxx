id = 477558546 
lang = cpp 
runtime  = 16 ms 
memory = 18 MB
title_slug = missing-number
code =
 ```class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num = nums.size() ;
        for(int i = 0; i < nums.size() ; i++ ) {
            num = num ^ (i ^ nums[i]) ;
        }
        return num ;
    }
};```