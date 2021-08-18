id = 482894882 
lang = cpp 
runtime  = 12 ms 
memory = 13.2 MB
title_slug = set-matrix-zeroes
code =
 ```class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        bool isCol = 0 ;
        for(int i = 0; i < mat.size(); i++ ){
            if(mat[i][0] == 0 ){
                isCol = true ;
            }
            for(int j = 1; j < mat[i].size(); j++ ) {
                if(mat[i][j] == 0 ){
                    mat[i][0] = 0 ;
                    mat[0][j] = 0 ;
                }
            }
        }
        
        for(int i = 1 ; i < mat.size(); i++ ) {
            for(int j = 1 ; j < mat[0].size(); j++ ){
                if(mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0 ;
                }
            }
        }
        
       if(mat[0][0] == 0 ){
           for(int i = 0 ; i < mat[0].size() ;i++) {
               mat[0][i] = 0; 
           } 
       }
        
        if(isCol ){
            for(int i = 0  ; i < mat.size() ; i++ ){
                mat[i][0] = 0 ;
            }
        }
    }
    
    
   
};```