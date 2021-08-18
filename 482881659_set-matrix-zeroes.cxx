id = 482881659 
lang = cpp 
runtime  = 12 ms 
memory = 13.3 MB
title_slug = set-matrix-zeroes
code =
 ```class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<pair<int, int>> zeroPos ;
        
        for(int i = 0; i < mat.size(); i++ ){
            for(int j = 0; j < mat[i].size(); j++ ) {
                if(mat[i][j] == 0 ) {
                    zeroPos.push_back({i,j}) ;
                }
            }
        }
        for(int i = 0; i < zeroPos.size() ; i++ ){           
                setZeroRow(zeroPos[i].first , mat );
                setZero(zeroPos[i].second, mat );
        }
    }
    
    
    void setZero(int col , vector<vector<int>> &mat) {
        for(int i = 0 ; i < mat.size(); i++ ) {
            mat[i][col] = 0;
        }
    }
    
    void setZeroRow(int row , vector<vector<int>> & mat) {
        for(int i = 0; i < mat[row].size(); i++ ) {
            mat[row][i] = 0 ;
        }
        // cout << mat[row].size() ;
    }
};```