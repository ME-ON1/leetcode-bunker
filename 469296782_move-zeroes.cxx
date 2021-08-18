id = 469296782 
lang = cpp 
runtime  = 4 ms 
memory = 9.1 MB
title_slug = move-zeroes
code =
 ```class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numZ =0 ;
        vector<int> ar ;
        
        for(auto i : nums  ) {
            if(i == 0) {
                numZ++ ;
            }else {
                ar.push_back(i) ;
            }
        }
        
        while(numZ--) {
            ar.push_back(0) ;
        }
        
        for(int i = 0; i < ar.size() ; i++) {
            nums[i] = ar[i] ;
        }
        
    }
};```