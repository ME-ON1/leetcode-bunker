id = 478401015 
lang = cpp 
runtime  = 36 ms 
memory = 20.8 MB
title_slug = single-number
code =
 ```class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum =  0 ;
        
        set<int> st ;
        
        for(auto i : nums) {
            sum += i ;
            st.insert(i) ;
        }
        int sumU = 0 ;
        for(auto i : st ) {
            sumU += i ; 
        }
        
        return 2*sumU - sum ;
     }
    
};```