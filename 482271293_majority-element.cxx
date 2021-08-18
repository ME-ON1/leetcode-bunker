id = 482271293 
lang = cpp 
runtime  = 12 ms 
memory = 19.6 MB
title_slug = majority-element
code =
 ```class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0 ;
        int count = 0; 
        
        for(int i = 0 ; i < nums.size()  ; i++ ){
            if(count == 0 ){
                candidate = nums[i] ;
            }
            
            count += candidate == nums[i] ? 1 : -1 ;
        }
        return candidate ;
    }
};```