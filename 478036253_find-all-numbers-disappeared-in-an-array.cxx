id = 478036253 
lang = cpp 
runtime  = 48 ms 
memory = 34.9 MB
title_slug = find-all-numbers-disappeared-in-an-array
code =
 ```class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ar(nums.size()+1, 0 );
        
        for(int i = 0 ; i < nums.size(); i++ ) {
            ar[nums[i]] += 1 ;
        }
        vector<int> miss ;
        // miss.push_back(NUL?L) ;
        for(int i = 1 ; i <= nums.size() ; i++ ){
            if(ar[i] == 0 ){
                miss.push_back(i) ;
            }
        }
        // for(auto i : ar) {
        //     cout << i << endl ;
        // }
        
        return miss ;
    }
};```