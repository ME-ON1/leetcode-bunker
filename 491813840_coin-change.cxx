id = 491813840 
lang = cpp 
runtime  = 68 ms 
memory = 14.5 MB
title_slug = coin-change
code =
 ```class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1 , amount+1)    ;
        dp[0] = 0;
        for(int i = 1 ; i <= amount ; i++ ){
            for(auto coin : coins){
                if(i - coin >= 0) {
                    dp[i] = min(dp[i - coin] + 1,  dp[i]) ;
                }
            }
        }
 
        if(dp[amount ] == amount + 1){
            return -1 ; 
        }else {
            return dp[amount] ;
        }
    }
};```