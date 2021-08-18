id = 412268702 
lang = cpp 
runtime  = 24 ms 
memory = 10.9 MB
title_slug = two-sum
code =
 ```class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v ;
        map<int,int> mp ;
        for(int i = 0 ; i < nums.size(); i++ ){
            int j ;
            j = nums[i];
            pair<int, int > p ;
            p = make_pair(j, i );
            mp.insert(p);
        }
        
        for(int i = 0 ; i < nums.size(); i++ ){
            int difw = target - nums[i] ;
            if(mp.find(difw) != mp.end() && mp[difw] != i){
                v.push_back(mp[difw]);
                v.push_back(i);
                return v; 
            }
        }
        return v ;
    }
};```