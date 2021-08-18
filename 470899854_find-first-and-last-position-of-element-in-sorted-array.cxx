id = 470899854 
lang = cpp 
runtime  = 8 ms 
memory = 13.8 MB
title_slug = find-first-and-last-position-of-element-in-sorted-array
code =
 ```class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ar ;
        for(int i = 0 ;i < nums.size(); i++) {
            if(nums[i] == target ) {
                ar.push_back(i); 
                int flag = 0 ;
                int lo = i , hi = nums.size() ;
                
                while(lo < hi) {
                    int mid = (lo + hi)/2; 
                    if(nums[mid] > target ){
                        hi = mid ;
                        flag = 1;
                    }else {
                        flag = 1 ;
                        lo = mid + 1 ;
                    }
                }
                cout << lo  << "\n" ;
                if(flag ){
                    ar.push_back(lo - 1) ;                    
                    break ;
                }
                
            }
        }
        
        if(!ar.size() ) {
            ar.push_back(-1);
            ar.push_back(-1);
        }
        return ar ; 
    }
};```