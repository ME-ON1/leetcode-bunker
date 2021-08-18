id = 488433753 
lang = cpp 
runtime  = 4 ms 
memory = 8 MB
title_slug = permutations
code =
 ```class Solution {
public:
        vector<vector<int >> ar ;
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int > pr ;
        getperm(nums, pr ) ;
        return ar ;
    }
    

    void getperm(vector<int>&nums , vector<int> &pr ) {
        if(pr.size() == nums.size() ){
            ar.push_back(pr);
            return ; 
        }
        
        for(int i = 0 ; i  < nums.size(); i++) {
           if(find(pr.begin(), pr.end(), nums[i]) == pr.end()) 
           {
               pr.push_back(nums[i]) ;
               getperm(nums , pr ) ;
               pr.pop_back() ;
           }
        }
        return ;
    }
};```