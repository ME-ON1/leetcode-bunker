id = 482478302 
lang = cpp 
runtime  = 24 ms 
memory = 13.1 MB
title_slug = find-the-duplicate-number
code =
 ```class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp ;
        
        for(int i = 0; i < nums.size(); i++ ) {
            mp[nums[i]]++ ;
        }
        
        for(auto i : mp ){
            if(i.second > 1) {
                return i.first  ;
            }
        }
        return -1 ;
    }
};```