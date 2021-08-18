id = 478817874 
lang = cpp 
runtime  = 36 ms 
memory = 17.1 MB
title_slug = range-sum-query-immutable
code =
 ```class NumArray {
    vector<int> arr ;
public:
    NumArray(vector<int>& nums) {
        arr = nums ;
        // cout << nim[0] << "" ;
        for(int i = 1 ; i < arr.size(); i++ ){
            arr[i] += arr[i-1] ;
        }
        for(auto i : arr) {
            cout << i << " " ;
        }
        cout << endl ;
    }
    
    int sumRange(int left, int right) {
        int dif_left , sum ;
        if(left != 0 ){
            dif_left = left - 1 - 0;
            sum = arr[right] - arr[dif_left] ;
        }else {
            sum = arr[right] ;
        }
        // int sum = arr[right] - arr[dif_left];
        // cout << arr[right] << " " << arr[dif_left] << endl;
        return sum ;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */```