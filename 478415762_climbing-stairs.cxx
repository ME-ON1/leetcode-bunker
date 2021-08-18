id = 478415762 
lang = cpp 
runtime  = 0 ms 
memory = 6 MB
title_slug = climbing-stairs
code =
 ```class Solution {
public:
    
    int climbStairs(int n) {
        vector<int> dp(n + 1,0 ) ;
        
        dp[0] = 0 ;
        dp[1] = 1 ;
        // dp[2] = 2 ;
        if(n < 2) {
            return dp[n] ;
        }
        if(n > 1) {
            dp[2] = 2; 
            for(int i = 1 ; i <= n; i++ ){
            if(!dp[i]){
                dp[i] = dp[i-1] + dp[i-2] ;
            }
            } 
            
        }
        
//         for(auto i : dp) {
//             cout << i  << " ";
//         }
        
        return dp[n];
    }
};```