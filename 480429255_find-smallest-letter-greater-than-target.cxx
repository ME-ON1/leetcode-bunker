id = 480429255 
lang = cpp 
runtime  = 12 ms 
memory = 15.8 MB
title_slug = find-smallest-letter-greater-than-target
code =
 ```class Solution {
public:
    char nextGreatestLetter(vector<char>& chars, char target) {
        int l = 0 ;
        int r = chars.size() ; 

        while(l < r ) {
            int mid = l + ( r - l )/ 2; 
            
            if(chars[mid] > target  ) {
                r = mid  ;  
            } else {
                l = mid + 1 ;
            }
        } 
        
        return chars[l% chars.size()] ;
    }
};```