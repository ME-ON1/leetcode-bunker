id = 472246025 
lang = cpp 
runtime  = 60 ms 
memory = 20 MB
title_slug = 3sum
code =
 ```class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ar ;
        
        sort(nums.begin(), nums.end()) ;
        
        int n = nums.size() ;
        
        for(int i = 0 ; i < n -2  ; i++ ) {
            if(i != 0 &&  nums[i] == nums[i-1]) 
                continue ;
                
            int l = i + 1; 
            int r = n - 1 ; 
            
            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r] ;
                
                if(sum == 0 ){
                    ar.push_back({nums[i], nums[l], nums[r]})     ;
                while(r -1 >= l && nums[r] == nums[r-1]) r-- ;
                while(l+1 < r && nums[l+1] == nums[l]) l++ ;
                    l++ ; 
                    r-- ;
                }else if(sum > 0) {
                    r-- ;
                }else {
                    l++; 
                }
                }
           
            }
        return ar ; 
            
    }
};```