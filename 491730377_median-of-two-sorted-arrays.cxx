id = 491730377 
lang = cpp 
runtime  = 52 ms 
memory = 93.6 MB
title_slug = median-of-two-sorted-arrays
code =
 ```class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp ; 
        vector<int> ar ; 
        for(auto i : nums1) {
            mp[i] += 1 ;
        }
        
        for(auto i : nums2) {
            mp[i] +=1 ;
        }
        for(auto i : mp )  {
            while(i.second--) {
                ar.push_back(i.first) ;
            }
        }
        // for(auto i : ar) cout << i << "  " ;
        if(ar.size() & 1) {
            return (double)ar[ar.size()/2] ;
        }else {
            // cout << endl ;
            // cout << ar.size()/2  << "" << ar.size() /2 +1 ;
            double a = ar[ar.size() /2 - 1] + ar[ar.size() /2 ] ;
            // cout <<endl << a<< endl ;
            return (double)a/2 ;
        }
    }
};```