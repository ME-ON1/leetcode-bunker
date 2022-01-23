id = 625059469 
lang = cpp 
runtime  = 421 ms 
memory = 56 MB
title_slug = subarrays-with-k-different-integers
code =

 class Solution {
public:
    int findAtmostK(vector<int>& A, int B ) {
        map<int,int> mp ; 
        int cnt =0;
        int i = 0, j = 0; 
        while( j < A.size() ) {
            mp[A[j]]++; 

            while(mp.size() > B ) {
                mp[A[i]]--;
                if(mp[A[i]] == 0 ){
                    mp.erase(A[i]);
                }
                i++; 
            } 
            cnt += j - i +1 ;
            j++ ;
        }
        return cnt ;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return findAtmostK(nums , k )  - findAtmostK(nums, k-1) ;       
    }
};