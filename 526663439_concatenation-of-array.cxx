id = 526663439 
lang = cpp 
runtime  = 12 ms 
memory = 12.9 MB
title_slug = concatenation-of-array
code =
 ```class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n =2 ;
        vector<int> ar; 
        while(n -- ) 
        {
            for(int i = 0 ; i < nums.size(); i++)
            {
                ar.push_back(nums[i]) ;
            }
        }
        
        return ar ;
    }
};```