id = 474173149 
lang = cpp 
runtime  = 12 ms 
memory = 9.8 MB
title_slug = 3sum-closest
code =
 ```class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end()) ;
        int n = nums.size() ;
        int mn = 10000000 ;
        int minSum = 0; 
        for(int i = 0; i < n - 2; i++ ) {
            
            int l = i + 1 ; 
            int r = n - 1 ;
            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r] ;
                int cmp = abs(target - sum ) ;
                if(cmp < abs(mn - target) ) {
                    // cout << nums[l] << " " << nums[i] << " " << nums[r] << " " ;
                    // cout << cmp << "\n"; 
                    mn = sum ;
                }
                if(sum > target ){
                    r-- ;
                }else {
                    l++ ;
                }
            }
        }
        
        return mn ;
    }
};```