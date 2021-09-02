id = 547755536 
lang = cpp 
runtime  = 4 ms 
memory = 7.6 MB
title_slug = stone-game
code =

 class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int left = 0 ; 
        int right = piles.size() - 1; 
        int ali = 0 , bob = 0 ;
        
        while(left < right) 
        {
            if (piles[left] > piles[right ]) 
            {
                ali += piles[left++] ;
                bob += piles[right--]; 
            }
            else 
            {
                ali += piles[right--] ;
                bob += piles[left++]; 
            }
        }
        
        return ali >= bob ? true : false ;
    }
};