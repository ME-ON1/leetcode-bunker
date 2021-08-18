id = 480935629 
lang = cpp 
runtime  = 4 ms 
memory = 8.9 MB
title_slug = two-sum
code =
 ```class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ar; 
        map<int, pair<int, int>> mp ;
        for(int i = 0 ;i < nums.size() ; i++ ){
            int valToFind = target - nums[i] ;
            if(mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = {i , 1} ; 
            }        
            cout << valToFind << endl ;
            if(mp[valToFind].first != i && mp[valToFind].second == 1 ) {
                ar.push_back(i) ;
                ar.push_back(mp[valToFind].first ) ;
                return ar ; 
            }
        } 
        return ar; 
    }
};```