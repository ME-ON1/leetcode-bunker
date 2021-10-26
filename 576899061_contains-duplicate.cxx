id = 576899061 
lang = cpp 
runtime  = 35 ms 
memory = 15.5 MB
title_slug = contains-duplicate
code =

 class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int x = 0 ; 
        sort(nums.begin(), nums.end() ) ;
        
        for(int i = 0; i < nums.size() - 1; i++ )
        {
            int p = nums[i] ^ nums[i+ 1];
            if (p == 0 )
            {
                return true ; 
            }
        }
        
        return false ;
    }
};