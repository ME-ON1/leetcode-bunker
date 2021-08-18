id = 470493695 
lang = cpp 
runtime  = 16 ms 
memory = 11.1 MB
title_slug = sort-array-by-increasing-frequency
code =
 ```class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m  ; 
        
        for(int i = 0 ; i < nums.size() ; i++ ) {
            if(m[nums[i]] == 0){
                // cout << nums[i] << endl ;
                m[nums[i]] = count_freq(nums, nums[i]) ;
            }
        }
        
        sort(begin(nums), end(nums) ,[&](int a, int b) {return (m[a] != m[b]? m[a] < m[b] : a > b); }) ;
        return nums ;
    }
    
    static bool cmp(pair<int,  int>& a, pair<int, int>& b){ 
        return a.second < b.second; 
    } 
    
    int count_freq(vector<int> & nums , int num) {
        int count = 0; 
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == num ){
                ++count ;
            }
        }
        return count ;
    }
};```