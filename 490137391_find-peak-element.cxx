id = 490137391 
lang = cpp 
runtime  = 4 ms 
memory = 8.9 MB
title_slug = find-peak-element
code =
 ```class Solution {
public:
    int findPeakElement(vector<int>& ar) {
        // if(ar.size() == 1) {
        //     return 0 ;
        // }
        // if(ar.size() < 3 ) {
        //     if(ar[0] > ar[1] ){
        //         return 0 ;
        //     }else{
        //         return 1 ;
        //     }
        // }z
        
        
     for(int i = 0 ; i < ar.size() -1 ; i++ ) {
         if(ar[i] > ar[i +1 ]){
             return  i ; 
         }
     }   
        return ar.size() -1 ;
    }
};```