id = 577829005 
lang = cpp 
runtime  = 0 ms 
memory = 6.2 MB
title_slug = robot-bounded-in-circle
code =

 class Solution {
public:
    bool isRobotBounded(string ins) {
        vector<vector<int>> dir{{0, 1}, {1, 0}, {0, -1}, { -1, 0}} ;
        int x = 0 , y = 0 , k = 0; 
        for(int i = 0 ; i < ins.size(); i++ )
        {
            if (ins[i] == 'L' )
            {
                k = (k + 1) % 4 ;
            }
            else if (ins[i] == 'R' )
            {
                k = (k + 3 ) % 4 ;
            }else {
                x += dir[k][0] , y += dir[k][1] ;
            }
        }
        
        if (x == 0 && y == 0 || k > 0 )
        {
            return true;
        }else{
            return false;
        }
    }
};