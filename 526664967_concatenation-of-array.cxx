id = 526664967 
lang = cpp 
runtime  = 8 ms 
memory = 12.4 MB
title_slug = concatenation-of-array
code =
 ```class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> ar(n*2 ) ;
        
        for(int i = 0; i < nums.size() ; i++ ) 
        {
            ar[i] = nums[i] ;
            ar[i+ n] = nums[i] ; 
        }
        
        return ar ;
    }
};```