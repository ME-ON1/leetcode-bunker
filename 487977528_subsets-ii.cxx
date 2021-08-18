id = 487977528 
lang = cpp 
runtime  = 4 ms 
memory = 7.5 MB
title_slug = subsets-ii
code =
 ```class Solution {
    
public:
    vector<vector<int>> ar; 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        vector<int > pr ;
        getperm( nums , 0, pr ) ;
        return ar ;
    }
    
    void getperm(vector<int>& nums,int index, vector<int>&  pr) {
        ar.push_back(pr) ;
        if(nums.size() == index ) {
            return ; 
        }
        
        for(int i = index ; i < nums.size(); i++ ) {
            if( i > index  && nums[i] == nums[i-1] ){
                continue ;
            }
            
            pr.push_back(nums[i]) ;
            
            getperm(nums, i+1  , pr );
            pr.pop_back() ;
        }
        
        return ;
    }
};```