id = 469280921 
lang = cpp 
runtime  = 12 ms 
memory = 13.5 MB
title_slug = remove-duplicates-from-sorted-array
code =
 ```class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0; 
        } 
        
        int i = 0 ;
        
        for(int j = 1 ;j < nums.size() ; j++ ) {
            if(nums[j] != nums[i] ) {
                i++ ;
                nums[i] = nums[j] ;
            }
        }
        
        return i+1 ;
    }
};```