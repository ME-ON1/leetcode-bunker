id = 614904834 
lang = cpp 
runtime  = 66 ms 
memory = 89.2 MB
title_slug = median-of-two-sorted-arrays
code =

 class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() ;
        int n = nums2.size() ;
        
        if(m > n) {
            return findMedianSortedArrays(nums2, nums1 ); 
        }
        
        int start = 0,  end = m ;
        
        while (start <= end ) {
            int mid = start + (end - start ) / 2 ; 
            int mid_2 = ( m + n + 1) / 2 - mid ;
            
            int left_a = mid == 0 ? INT_MIN : nums1[mid-1] ;
            int right_a = mid == m ?  INT_MAX : nums1[mid ] ;
            int left_b = mid_2 == 0 ? INT_MIN : nums2[mid_2 - 1] ;
            int right_b  = mid_2 == n ? INT_MAX : nums2[mid_2]; 
            
            if(left_a > right_b ) {
                end = mid -1 ;
            } else if(left_b > right_a) {
                start = mid  + 1;
            } else {
                if( n + m  & 1 ) {
                    return (double)max(left_a, left_b) ;
                } else {
                    // cout << max(left_a, left_b ) << " " <<  min(right_a, right_b) << endl ;
                    int sum = max(left_a, left_b ) + min(right_a, right_b) ;
                    return sum / 2.000000 ;
                }
            }
        }
        return 0.000 ;
    }
};