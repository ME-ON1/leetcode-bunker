id = 542841463 
lang = cpp 
runtime  = 4 ms 
memory = 9 MB
title_slug = merge-sorted-array
code =

 class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // compare from the last element and move bigger to places from the last element 
        int firstPt = m -1 , secondPt = n - 1 ; 
        
        int ind = nums1.size() - 1;
        while(firstPt >= 0 && secondPt >= 0) {
            if (nums1[firstPt ] < nums2[secondPt ] ) 
            {
                nums1[ind-- ] = nums2[secondPt--] ;
            }
            else 
            {
                nums1[ind -- ] = nums1[firstPt--] ; 
            }
        }
        while(secondPt >= 0 ) {
            nums1[ind-- ] = nums2[secondPt--] ;
        }
    }
};