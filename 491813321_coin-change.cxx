id = 491813321 
lang = cpp 
runtime  = 60 ms 
memory = 14.4 MB
title_slug = coin-change
code =
 ```class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1 , 1000000009)    ;
        dp[0] = 0;
        for(int i = 1 ; i <= amount ; i++ ){
            for(auto coin : coins){
                if(i - coin >= 0) {
                    dp[i] = min(dp[i - coin] + 1,  dp[i]) ;
                }
            }
        }
        // for(auto i : dp ){
        //     cout << i << "  " ;
        // }
        if(dp[amount ] == 1000000009){
            return -1 ; 
        }else {
            return dp[amount] ;
        }
    }
};```