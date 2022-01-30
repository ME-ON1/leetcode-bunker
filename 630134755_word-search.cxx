id = 630134755 
lang = cpp 
runtime  = 385 ms 
memory = 8.1 MB
title_slug = word-search
code =

 class Solution {
public:
      
    bool isValidmove(int r, int c, int real_r, int real_c, vector<vector<int>>& vis ){
        return r >= 0 and real_r > r and c >= 0 and real_c > c and vis[r][c] == 0 ;
    }
    
    
    bool explore(int r, int c, vector<vector<char>>& board, string& word, int index, vector<vector<int>> & vis ) {

        index++; 
        if (index == word.size() ) {
                return true;
        }
        vis[r][c] = 1 ;
        int dirX[] =  {0, 0 , 1 , -1} ;
        int dirY[] = { -1 , 1 , 0 , 0 } ;
        
        for(int i = 0; i < 4 ; i++ ) {
            int new_r = dirX[i] + r ;
            int new_c = dirY[i] + c ;
            if(isValidmove(new_r, new_c, board.size(), board[0].size(), vis ) and board[new_r][new_c] == word[index ] and explore(new_r, new_c,  board, word, index,  vis)) {
                return true ;
            }
        }
        vis[r][c] = 0 ;
        return false ;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>> vis(board.size(), vector<int>(board[0].size(), 0 )) ; 
        
        queue<pair<int,int>> q;
        
        for(int row = 0;  row < board.size(); row++ ) {
            for(int col = 0; col < board[0].size(); col++ ) {
                if(word[0] == board[row][col] ){
                    q.push({row, col }); 
                }
            }
        }
        while(!q.empty()){ 
            pair<int, int> pq = q.front() ;
            int row = pq.first ;
            int col = pq.second ;
            q.pop();
            if (explore(row, col, board, word, 0 , vis ) ) {
                return 1; 
            }
        }
        return false;
    }
};