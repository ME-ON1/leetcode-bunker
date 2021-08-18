id = 487473800 
lang = cpp 
runtime  = 4 ms 
memory = 7.1 MB
title_slug = subsets
code =
 ```class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ar ;
        
        // ar[0].push_back();0
        vector<int> pr; 
        getperm(ar, nums, 0,  pr ) ;
        return ar ; 
    }
    
    void getperm(vector<vector<int>> & ar, vector<int> &nums , int index, vector<int> &pr )     {
        if(index == nums.size() )   {
           ar.push_back(pr) ;
            return ;
        }
        
        pr.push_back(nums[index]) ;
        getperm(ar , nums , index+ 1, pr ) ;
        
        pr.pop_back();
        getperm(ar, nums, index+1, pr ) ;
        
        
        return ;
    }
};```