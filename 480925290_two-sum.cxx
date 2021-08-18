id = 480925290 
lang = cpp 
runtime  = 4 ms 
memory = 8.9 MB
title_slug = two-sum
code =
 ```class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ar; 
//         int left = 0 ;
//         int right = nums.size() ;
        
//         while(left < right ) {
//             if(nums[left] + nums[right ] > target ) {
//                 right-- ; 
//             }else if(nums[left] + nums[right] < target ) {
//                 left ++; 
//             }else if(nums[left] + nums[right] == target) {
//                 ar.push_back(left);
//                 ar.push_back(right);
                
//             }
//         }
        
        for(int i = 0 ;i < nums.size() - 1 ; i++ ){
            for(int j = i+1 ; j < nums.size() ;j++ ){
                // cout << i <<  " " << j << endl ;
                if(nums[i] + nums[j] == target ) {
                    ar.push_back(i) ;
                    ar.push_back(j) ;
                    return ar ;
                }
            }
        }
        return ar; 
    }
};```