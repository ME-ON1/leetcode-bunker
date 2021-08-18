id = 470940731 
lang = cpp 
runtime  = 0 ms 
memory = 5.9 MB
title_slug = first-bad-version
code =
 ```// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lo = 1 , hi  = n  ;
        while(lo < hi ){
            int mid = lo + (hi -lo )/2 ;
            // cout << mid <<  " " ; 
                        
            if(isBadVersion(mid)) {
                hi = mid  ;
            }else {
                lo = mid + 1 ;
            }
        }
        cout << lo << " " << hi ;
        return lo ;
    }
};```