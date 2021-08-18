id = 495817287 
lang = cpp 
runtime  = 8 ms 
memory = 7 MB
title_slug = sum-of-all-subset-xor-totals
code =
 ```class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int lengthOfSub = 1 << nums.size()  ;
        int xorRes = 0 ;
        for(int i = 0 ; i < (1 << nums.size())  ; i++ ) {
            int xorSub = 0 ; 
            for(int j = 0 ; j < nums.size() ; j++ ) {
                 if((i & (1 << j ) ) != 0 ) {
                     xorSub ^= nums[j] ;
                 }
            }
            
            xorRes += xorSub  ; 
        }   
        
        
        return xorRes ;
    }
};```