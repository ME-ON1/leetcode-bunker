id = 537702763 
lang = cpp 
runtime  = 12 ms 
memory = 11.2 MB
title_slug = two-sum
code =
 ```class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> ar; 
        vector<int> pe;
        for(int i =  0; i < nums.size() ; i++ ) 
        {
            if (ar.find(target - nums[i]) != ar.end() )
            {
                pe.push_back(ar[target - nums[i]]); 
                pe.push_back(i) ;
                break ;
            }
            else 
            {
                ar[nums[i]] = i ;
            }
        }
        
        return pe ;
    }
};```