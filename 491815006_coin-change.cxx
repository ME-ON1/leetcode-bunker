id = 491815006 
lang = cpp 
runtime  = 96 ms 
memory = 14.4 MB
title_slug = coin-change
code =
 ```class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1 , amount+1)    ;
        dp[0] = 0;
        for(int i = 1 ; i <= amount ; i++ ){
            for(int coin = 0 ; coin < coins.size(); coin++ ){
                if(i - coins[coin] >= 0) { 
                    dp[i] = min(dp[i - coins[coin]] + 1,  dp[i]) ;
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