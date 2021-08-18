id = 487028615 
lang = cpp 
runtime  = 4 ms 
memory = 6.9 MB
title_slug = subsets
code =
 ```class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size() ;
        vector<vector<int>> ar((1 << n ));
        for(int i = 0 ; i < (1 << n ) ; i++ ) {
            for(int j = 0 ; j < n ; j++ ){
                if( (i & (1 << j )) != 0) {
                    ar[i].push_back(nums[j]) ;
                } 
            }
        }
        
        return ar; 
    }
};```