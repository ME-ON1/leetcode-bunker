id = 491246695 
lang = cpp 
runtime  = 0 ms 
memory = 6.3 MB
title_slug = combination-sum-iii
code =
 ```class Solution {
public:
    vector<vector<int>> ar ; 
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> pr ; 
        getcombine(k , n , 1 , pr ) ;
        return ar;
    }
    
    void getcombine(int k , int n,int index , vector<int> & pr ) {
        // if(pr.size() > k )return ;
        if(pr.size() == k && n == 0){
            ar.push_back(pr) ; 
            return ; 
        }
        for(int i = index  ; i <= 9 ; i++ ) {
            pr.push_back(i) ;
            getcombine(k , n -i  , i +1 , pr);
            pr.pop_back() ;
        }
    }
    
};```