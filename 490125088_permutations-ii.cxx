id = 490125088 
lang = cpp 
runtime  = 8 ms 
memory = 9.8 MB
title_slug = permutations-ii
code =
 ```class Solution {
public:
    vector<vector<int>> ar ;
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>  pr; 
        sort(nums.begin(), nums.end()) ; 
        getperm(nums, 0) ;
        
        return ar; 
    }
    
    void getperm(vector<int > nums , int index ){
        if(index == nums.size()) {
            ar.push_back(nums) ;
            return ; 
        }
        
        for(int i = index ; i < nums.size() ; i++ ){
            if(i != index && nums[i] == nums[index]) continue ;
            swap(nums[i] , nums[index]) ;
            getperm(nums, index + 1) ;
        }
    }
};```