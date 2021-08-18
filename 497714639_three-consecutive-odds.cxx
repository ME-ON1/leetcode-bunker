id = 497714639 
lang = cpp 
runtime  = 4 ms 
memory = 8.3 MB
title_slug = three-consecutive-odds
code =
 ```class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i = 2 ; i < arr.size() ; i++ ) {
            if((arr[i - 2] & 1) && (arr[i -1 ] & 1) && (arr[i] & 1) ) {
                return true ;
            }
        }
        
        return false; 
    }
};```