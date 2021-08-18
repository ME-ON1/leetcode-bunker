id = 470892608 
lang = cpp 
runtime  = 4 ms 
memory = 13.8 MB
title_slug = find-first-and-last-position-of-element-in-sorted-array
code =
 ```class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ar ;
        for(int i = 0 ;i < nums.size(); i++) {
            if(nums[i] == target ) {
                ar.push_back(i); 
                int flag = 0 ;
                int j = i ;
                while(j < nums.size() ){
                    if(nums[j] == target) {
                        flag = 1 ;
                        j++;
                    }else {
                        break ;
                    }
                }
                cout << j << "\n" ;
                
                if(flag) {
                        j = j -1 ;
                        ar.push_back(j) ;
                    break;
                }
            }
        }
        
        if(!ar.size() ) {
            ar.push_back(-1);
            ar.push_back(-1);
        }
        return ar ; 
    }
};```