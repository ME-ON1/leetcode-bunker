id = 477550490 
lang = cpp 
runtime  = 24 ms 
memory = 17.9 MB
title_slug = missing-number
code =
 ```class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        
        
        if(nums[nums.size() - 1 ] != nums.size() ) 
        {
            return nums.size() ;
        }
        if(nums[0] != 0 ){
            return 0; 
        }
        
        for(int i = 0; i < nums.size() -1; i++ ){
            int num = nums[i] + 1  ;
            if(nums[i+1] != num ) {
                // cout << i << " " << num << endl ;
                return num ;
            }
            
        }
        
        return -1 ;
    }
};```