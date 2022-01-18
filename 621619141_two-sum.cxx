id = 621619141 
lang = cpp 
runtime  = 8 ms 
memory = 11.2 MB
title_slug = two-sum
code =

 class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        // sort(A.begin(), A.end()) ;
        
        map<int, int> mp;
        vector<int> Ar(2);
        for(int i = 0 ; i < A.size(); i++) {
            int sm = target - A[i] ;
            cout << sm << " " << i << endl ;
            if(mp.find(sm) != mp.end()) {
                Ar[0] = i ;  
                Ar[1] = mp[sm];
                return Ar;
            } 
            mp[A[i]] = i ;
        }
        
        return Ar; 
    }
};