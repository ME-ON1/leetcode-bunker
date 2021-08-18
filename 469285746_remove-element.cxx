id = 469285746 
lang = cpp 
runtime  = 0 ms 
memory = 8.7 MB
title_slug = remove-element
code =
 ```class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0 ; 
        for(int j =  0; j < nums.size(); j++ ) {
            if(nums[j] != val ) {
                nums[i] = nums[j] ; 
                
                i++ ;
            }
        }
        
        cout << i << "\n" ;
        return i  ;
    }
};```