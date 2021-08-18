id = 517335760 
lang = golang 
runtime  = 0 ms 
memory = 2.7 MB
title_slug = sum-of-left-leaves
code =
 ```/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func sumOfLeftLeaves(root *TreeNode) int {
    sum := 0
    rec(root, false  ,&sum ) 
    
    return sum ;
}

func rec(root * TreeNode , isLeft bool , sum *int) {
    if root.Left == nil && root.Right == nil && isLeft {
        *sum += root.Val 
        return ; 
    } 
    
    if root.Left != nil {
        rec(root.Left , true , sum  )  
    }
    
    if root.Right != nil {
        rec(root.Right , false , sum)
    }
    
    return ;
}```