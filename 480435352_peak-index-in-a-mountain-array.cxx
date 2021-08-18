id = 480435352 
lang = cpp 
runtime  = 12 ms 
memory = 11.5 MB
title_slug = peak-index-in-a-mountain-array
code =
 ```class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0 ;
        int r = arr.size() ;
        int mid = 0; 
        while(l < r ) {
            mid = l + (r- l )/ 2 ;
            cout <<  mid << " " << l << " " << r<< endl ;
            if(arr[mid ] > arr[mid -1] && arr[mid] > arr[mid +1]){
                return mid ;
            }else if(arr[mid] < arr[mid -1]) {
                r = mid ;
            }else {
                l = mid + 1 ; 
            }
        } 
        
        return -1 ;
    }
};```