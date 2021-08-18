id = 481729054 
lang = cpp 
runtime  = 48 ms 
memory = 25.9 MB
title_slug = squares-of-a-sorted-array
code =
 ```class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0 ;
        int r = nums.size() -1 ;
        vector<int>  ar(nums.size() );
        
        
        for(int i = nums.size() -1 ; i >= 0 ;i-- ) {
            if(abs(nums[l]) > abs(nums[r])) {
                ar[i] = (nums[l]*nums[l++]);
            }else {
                ar[i] = (nums[r]*nums[r--]) ;
            }
        }
        return ar ; 
    }
};```