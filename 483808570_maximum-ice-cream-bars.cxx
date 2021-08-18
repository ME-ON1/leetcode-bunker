id = 483808570 
lang = cpp 
runtime  = 176 ms 
memory = 76.4 MB
title_slug = maximum-ice-cream-bars
code =
 ```class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int num_IceCreams = 0 ;
        sort(costs.begin(), costs.end()) ;
        for(int i = 0 ; i < costs.size() && coins ; i++ ) {
            if(costs[i] <= coins ) {
                coins -= costs[i] ;
                num_IceCreams++ ; 
            }
        }
        
        return num_IceCreams ;
    }
};```