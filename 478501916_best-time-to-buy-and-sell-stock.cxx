id = 478501916 
lang = cpp 
runtime  = 120 ms 
memory = 97.2 MB
title_slug = best-time-to-buy-and-sell-stock
code =
 ```class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> ar(prices.size() + 1, 0); 
        int minPrice = prices[0] ; 
        int maxPrice = 0 ;
        
        for(int i = 1 ; i < prices.size() ; i++ ) {
            minPrice = min(minPrice , prices[i]) ;
            maxPrice = max(maxPrice ,prices[i] - minPrice )  ;
        }
        return maxPrice; 
    }
};```