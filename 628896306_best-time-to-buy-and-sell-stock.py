id = 628896306 
lang = python3 
runtime  = 972 ms 
memory = 24.9 MB
title_slug = best-time-to-buy-and-sell-stock
code =

 class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mn = prices[0]
        mx = float('-inf')
        
        
        for i in range(len(prices)) :
            money = prices[i] - mn 
            
            if money > mx:
                mx = money 
            elif prices[i] < mn :
                mn = prices[i]
                
        return mx 