id = 612760515 
lang = cpp 
runtime  = 202 ms 
memory = 23.2 MB
title_slug = number-of-laser-beams-in-a-bank
code =

 class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>ar ;
        int ans = 0, tmp = 1 ;
        for(int i = 0; i < bank.size();i++) {
            int cnt = 0; 
            for(int j = 0; j < bank[i].size(); j++ ) {
                if(bank[i][j] == '1') cnt++; 
            }
            if(cnt) ar.push_back(cnt ) ;
        }
        if(ar.size() == 0) {
            return 0; 
        }            
        
        for(int i = 0; i < ar.size() - 1;i++) {
            ans += ar[i] * ar[i+1]; 
        }
        return ans ;
        
    }
};