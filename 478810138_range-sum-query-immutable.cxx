id = 478810138 
lang = cpp 
runtime  = 272 ms 
memory = 16.9 MB
title_slug = range-sum-query-immutable
code =
 ```class NumArray {
    vector<int> arr ;
public:
    NumArray(vector<int>& nums) {
        arr = nums ;
        // cout << nim[0] << "" ;
    }
    
    int sumRange(int left, int right) {
        int sum = 0 ;
        // cout << arr[left] << endl ;
        // return 10 ;
        for(int i = left ; i <= right;i ++ ){
            sum += arr[i] ;
        }
        return sum ;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */```