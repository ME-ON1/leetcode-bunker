id = 494481980 
lang = cpp 
runtime  = 376 ms 
memory = 10.2 MB
title_slug = two-sum
code =
 ```class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ar ; 
        for(int i = 0 ; i < nums.size( ); i++ ) {
            for(int j = i + 1 ; j < nums.size() ; j++ ){
                if(target - nums[i ] == nums[j]) {
                    ar.push_back(i) ;
                    ar.push_back(j) ;
                    return ar ;
                }
            }
        }   
        return ar ;
    }
};```