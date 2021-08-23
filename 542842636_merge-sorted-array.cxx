id = 542842636 
lang = cpp 
runtime  = 0 ms 
memory = 9.1 MB
title_slug = merge-sorted-array
code =

 class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        map<int, int > ar; 
        int j = 0; 
        for (int i = m ; i < nums1.size() ; i++, j++ ) 
        {
            nums1[i] = nums2[j] ;
        }
        
        sort(nums1.begin() , nums1.end() ) ;
    }
};