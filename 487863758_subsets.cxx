id = 487863758 
lang = cpp 
runtime  = 4 ms 
memory = 7.3 MB
title_slug = subsets
code =
 ```class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ar ;
        // vector<int> pr; 
        getperm(ar, nums, 0,  {} ) ;
        return ar ; 
    }
    
    void getperm(vector<vector<int>> & ar, vector<int> &nums , int index, vector<int> pr )     {
        ar.push_back(pr) ;
        if(index == nums.size() ){
            return ;
        }
        for(int i = index ; i < nums.size() ; i ++ ) {
            pr.push_back(nums[i]) ; 
            getperm(ar, nums, i +1 , pr ) ;
            pr.pop_back() ;
        }
    }
};```