id = 519934865 
lang = cpp 
runtime  = 272 ms 
memory = 80.3 MB
title_slug = contains-duplicate-ii
code =
 ```class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       set<int >s ; 
       if (k <= 0) {
           return false ;
       }
       if (k >= nums.size())
       { 
           k = nums.size() - 1;
       }
        for(int i = 0; i < nums.size() ; i++ ) 
        {
            if(i > k ) 
            {
                s.erase(nums[i - k -1 ]) ;
            }
            if(s.find(nums[i]) != s.end())
            {
                 return true ;
             }
             s.insert(nums[i]) ;    
            }
        return false; 
    }
};```