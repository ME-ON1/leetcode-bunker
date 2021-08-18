id = 493912513 
lang = cpp 
runtime  = 128 ms 
memory = 49.2 MB
title_slug = coin-change
code =
 ```class Solution {
public:
    // 2 d dp array try 
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0 ) return 0 ;
        int n = coins.size() ;
        vector<vector<int>> dp(n + 1 , vector<int> (amount + 1, amount + 1));
        
        for(int i = 0; i < n +1  ;i++ ) {
            dp[i][0] = 0 ;
        }
        
        for(int i = 0 ; i < amount + 1 ; i++ ) {
            dp[0][i] = amount +1 ;
        }
        
        for(int i =  1; i < n +1 ; i++ ) {
            for(int j = 1; j < amount + 1; j++ ){
                if(j  - coins[i-1] >= 0 ){
                    dp[i][j] = min(dp[i-1][j], dp[i][j - coins[i-1]] +1) ;
                }else {
                    dp[i][j] = dp[i-1][j] ;
                }
            }
        }
        
        return dp[n][amount] == amount +1 ? -1 : dp[n][amount] ;
    }
};```