id = 547266331 
lang = golang 
runtime  = 4 ms 
memory = 4.6 MB
title_slug = path-sum-ii
code =

 /**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

var sum int = 0 ;
func pathSum(root *TreeNode, target int) [][]int {
    ar := [][]int{} ;
    // tmp := []int{}
    var recurse func(*TreeNode , int , []int ) ;
    
    recurse = func(root * TreeNode, sum int , tmp []int) {
        if root == nil {
            return ; 
        }
        
        sum += root.Val ; 
        tmp = append(tmp , root.Val ) ;
        
        if root.Left == nil && root.Right == nil  {
            if target == sum { 
                ar = append(ar, append([]int(nil), tmp...)) ;
            }
        }
        
        recurse(root.Left ,sum , tmp )
        
        recurse(root.Right, sum , tmp ) ;
    }
    
    recurse(root , 0 , nil ); 
    return ar ;
}