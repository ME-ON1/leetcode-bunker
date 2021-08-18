id = 480430296 
lang = cpp 
runtime  = 12 ms 
memory = 11.6 MB
title_slug = peak-index-in-a-mountain-array
code =
 ```class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i = 1 ; i < arr.size() -1 ; i++ ) {
            if(arr[i -1] < arr[i ] && arr[i] > arr[i+1]) {
                return i ;
            }
        }
        
        return -1 ;
    }
};```