id = 605428859 
lang = cpp 
runtime  = 120 ms 
memory = 93.1 MB
title_slug = number-of-smooth-descent-periods-of-a-stock
code =

 class Solution {
public:
    
//     long long int calc(long long int cnt ) {
        
//     }
    
    long long getDescentPeriods(vector<int>& A) {
        // int cnt = 0; 
        long long  i = 0, j =  1 ; 
        long long ans = 0; 
        while( i < A.size()) {
            while(j < A.size() && A[j -1 ] - A[ j] == 1) {
                j ++ ;
                if( j == A.size()) break ;
            }
            ans += (j - i ) * ( j - i + 1)/2 ; // length of that 1 diff array 
            i = j ;
            j++ ;
        }
        
        return ans ;
        
    }
};