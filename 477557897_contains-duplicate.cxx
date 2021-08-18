id = 477557897 
lang = cpp 
runtime  = 44 ms 
memory = 22.5 MB
title_slug = contains-duplicate
code =
 ```class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end()) ;
        set<int> s ;
        
        for(auto i=0 ; i < nums.size() ;i++) {            
            s.insert(nums[i]) ;
        }
        
        if(s.size() == nums.size()) {
            return false ;
        }else {
            return true ;
        }
        
        // return false ;
    }
};```