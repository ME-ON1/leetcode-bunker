id = 482478614 
lang = cpp 
runtime  = 20 ms 
memory = 12.7 MB
title_slug = find-the-duplicate-number
code =
 ```class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp ;
        
        for(int i = 0; i < nums.size(); i++ ) {
            mp[nums[i]]++ ;
            if(mp[nums[i]] > 1){
                return nums[i] ;
            }
         }
        
//         for(auto i : mp ){
//             if(i.second > 1) {
//                 return i.first  ;
//             }
//         }
        return -1 ;
    }
};```