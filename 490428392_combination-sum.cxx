id = 490428392 
lang = cpp 
runtime  = 8 ms 
memory = 11 MB
title_slug = combination-sum
code =
 ```class Solution {
public:
    vector<vector<int>> ar; 
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end() ) ;
        int index = 0 ;
        vector<int> pr ;
        getcombine(target ,index,  nums , pr); 
        return ar ;
    }
    
    void getcombine(int target , int & index ,vector<int>& nums, vector<int> & pr) {
        if(target == 0) {
            ar.push_back(pr) ;
            return ;
        }
        for(int i = index ; i < nums.size() ;i++ ) {
            if(target - nums[i] < 0 ) continue ;
            
            pr.push_back(nums[i]) ;
            getcombine(target - nums[i], i , nums, pr ) ;
            pr.pop_back() ;
        }       
        
        
    }
};```