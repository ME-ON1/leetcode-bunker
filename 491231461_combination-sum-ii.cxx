id = 491231461 
lang = cpp 
runtime  = 4 ms 
memory = 10.8 MB
title_slug = combination-sum-ii
code =
 ```class Solution {
public:
    vector<vector<int>> ar ;
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> pr ; 
        sort(nums.begin(), nums.end() ) ;
        getcombine(target, pr , nums , 0 ) ;
        return ar ;
    }
    
    void getcombine(int target, vector<int> & pr , vector<int> & nums, int index  ){
        if(target == 0){
            ar.push_back(pr) ;
            return ;
        }
        
        
        for(int i = index ; i < nums.size() ;i++ ){
            if(target - nums[i] < 0) continue ;
            if(i > index && nums[i] == nums[i-1] ) {
                continue ;
            }
            pr.push_back(nums[i]) ;
            // cout << i 
            getcombine(target - nums[i], pr ,nums , i + 1 );
            pr.pop_back() ;
        }
        
    }
};```