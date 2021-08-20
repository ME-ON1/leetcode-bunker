id = 540004115 
lang = cpp 
runtime  = 236 ms 
memory = 122.3 MB
title_slug = array-with-elements-not-equal-to-average-of-neighbors
code =

 class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        sort(nums.begin() , nums.end()) ;
        
        vector<int > ar(nums.size()) ;
        
    
        for(int i = 0, j = 0 ; i < ( nums.size() + 1)/ 2 ; i++ ) 
        {
            ar[j] = nums[i]; 
            j += 2 ;
        }
        
        for(int i = (nums.size() + 1)/ 2, j = 1 ; i < nums.size() ; i++ ) 
        {
            ar[j] = nums[i] ;
            j += 2; 
        }
        
        return ar ;
    }
};