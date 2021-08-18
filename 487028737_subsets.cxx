id = 487028737 
lang = cpp 
runtime  = 0 ms 
memory = 7 MB
title_slug = subsets
code =
 ```class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ar((1 << nums.size()));
        for(int i = 0 ; i < (1 << nums.size() ) ; i++ ) {
            for(int j = 0 ; j < nums.size() ; j++ ){
                if( (i & (1 << j )) != 0) {
                    ar[i].push_back(nums[j]) ;
                } 
            }
        }
        
        return ar; 
    }
};```