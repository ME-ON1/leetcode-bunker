id = 480943868 
lang = cpp 
runtime  = 8 ms 
memory = 8.9 MB
title_slug = two-sum
code =
 ```class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ar; 
        // map<int, pair<int, int>> mp ;
        for(int i = 0 ;i < nums.size() ; i++ ){
            int valToFind = target - nums[i] ;
            
            auto it = find(nums.begin(), nums.end(), valToFind) ;
            
            if(it != nums.end() && it != nums.begin() + i ) {
                // cout << i << "  " << it - nums.begin() << endl ;
                ar.push_back(i) ;
                ar.push_back(it - nums.begin()) ;
                return ar ;
            }
        } 
        return ar; 
    }
};```