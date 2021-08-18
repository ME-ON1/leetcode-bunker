id = 482493755 
lang = cpp 
runtime  = 8 ms 
memory = 11 MB
title_slug = find-the-duplicate-number
code =
 ```class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tor = nums[0] ;
        int hare = nums[0] ;
        int i = 0 ;
        while(1) {
            tor = nums[tor] ;
            hare = nums[nums[hare]] ;
            if(tor == hare ) {
                break ;
            }
        }
        
        tor = nums[0] ;
        
        while(tor != hare ){
            tor = nums[tor] ;
            hare = nums[hare] ;
        }
        
        return tor; 
        
    }
};```