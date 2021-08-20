id = 538984570 
lang = golang 
runtime  = 0 ms 
memory = 3.3 MB
title_slug = number-of-islands
code =

 func numIslands(grid [][]byte) int {
    
    numOfIsland := 0
    rows := len(grid) ;
    cols := len(grid[0])
    
    
    vis := make([][] int , rows) 
    
    for i := 0 ; i < rows; i++ {
        // for j := 0 ; j < cols ; j++ {
            vis[i]  = make([]int,  cols) 
        // }
    }
    
    for i:=0; i < len(grid); i++ {
        for j := 0 ; j < len(grid[0]); j++ {
            if grid[i][j] == '1' && vis[i][j] == 0  {
                numOfIsland++  ;
                deleteIsland(i , j , grid ,vis, rows, cols)
            }
        }
    }
    
    return numOfIsland ;
}

func deleteIsland(i int , j int , grid [][]byte , vis [][]int, rows int, cols int ) {
    vis[i][j] =1 ;
    
    if i -1 >= 0 && grid[i -1][j] == '1' && vis[i-1][j] == 0 {
        // vis[i-1][j] = 0 
        // grid[i-1][j] = '0'
        deleteIsland(i - 1, j, grid , vis, rows, cols )
    } 
    
    if i + 1 < rows && grid[i+1][j] == '1' && vis[i+1][j] == 0 {
        deleteIsland(i+ 1 , j, grid, vis, rows, cols) 
    }
    
    if j -1 >= 0 && grid[i][j-1] == '1' && vis[i][j -1 ] == 0 {
        deleteIsland(i , j -1, grid, vis, rows, cols)
        
    }
    
    if j + 1 < cols && grid[i][j +1 ] == '1' && vis[i][j+1] == 0 {
        deleteIsland(i , j + 1, grid, vis, rows, cols)
    }

}