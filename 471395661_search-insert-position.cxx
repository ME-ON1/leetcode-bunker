id = 471395661 
lang = cpp 
runtime  = 4 ms 
memory = 9.7 MB
title_slug = search-insert-position
code =
 ```class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0 ;
        int hi = nums.size() ;
        
        while(lo < hi ) {
            int mid = lo + (hi - lo )/2 ; 
            
            if(nums[mid] == target ){
                return mid ;
            }else if(nums[mid] > target ) {
                hi = mid ;
            }else {
                lo = mid + 1 ;
            }
        }
        cout << lo << endl ;
        return lo ; 
    }
};```