id = 489709792 
lang = cpp 
runtime  = 52 ms 
memory = 15.8 MB
title_slug = minimum-operations-to-make-the-array-increasing
code =
 ```class Solution {
public:
    int minOperations(vector<int>& ar) {
        int cnt = 0 ;
        for(int i = 1; i < ar.size(); i++ ){
            if(ar[i] <= ar[i-1]) {
                cnt += abs(ar[i-1] - ar[i] ) + 1 ;
                
                ar[i] = ar[i-1] + 1 ;
            }
        }
        
        for(auto i : ar ){
            cout << i << " " ; 
        }
        return cnt ;
    }
};```