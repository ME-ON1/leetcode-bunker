id = 576896212 
lang = cpp 
runtime  = 124 ms 
memory = 93.2 MB
title_slug = best-time-to-buy-and-sell-stock
code =

 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfits = 0 ; 
        int minPrices = INT_MAX ; 
        for(int i = 0; i < prices.size() ; i++ ) 
        {
            if (prices[i] < minPrices ) 
            {
                minPrices = prices[i] ;
            }else if(prices[i] - minPrices > maxProfits )
            {
                maxProfits = prices[i] - minPrices ;
            }
        }
        
        // cout << sellMax << " " << buyMin << endl; 
        
        return maxProfits ; 
    }
};