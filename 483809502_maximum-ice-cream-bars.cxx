id = 483809502 
lang = cpp 
runtime  = 172 ms 
memory = 76.3 MB
title_slug = maximum-ice-cream-bars
code =
 ```class Solution {
public:
    int maxIceCream(vector<int>& costs,  int coins) {
        int num_IceCreams = 0 ;
        int sum = 0; 
        sort(costs.begin(), costs.end()) ;
       for(int i = 0 ; i < costs.size(); i++ ) {
            sum += costs[i] ;
            num_IceCreams++ ;
            if(sum <= coins) {
                continue;
            }else{
                num_IceCreams-- ;
                sum -= costs[i]; 
                break ;
            }
        }
        
        return num_IceCreams ;
    }
};```