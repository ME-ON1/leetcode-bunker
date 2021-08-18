id = 477185106 
lang = cpp 
runtime  = 44 ms 
memory = 22.4 MB
title_slug = contains-duplicate
code =
 ```class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        map<int, int> mp ; 
        for(auto i=0 ; i < nums.size() ;i++) {
            mp[nums[i]] += 1 ;
        }
        
        for(auto i : mp) {
            if(i.second >= 2) {
                return true ;
            }
            // cout << i.first << " " << i.second << endl ;
        }
        
        return false ;
    }
};```