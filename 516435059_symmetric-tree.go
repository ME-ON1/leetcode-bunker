id = 516435059 
lang = golang 
runtime  = 0 ms 
memory = 2.9 MB
title_slug = symmetric-tree
code =
 ```/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isSymmetric(root *TreeNode) bool {
    return rec(root.Left, root.Right) 
}

func rec(l * TreeNode , r * TreeNode) bool {
    if l == nil && r == nil {
        return true 
    }
    
    if l == nil || r == nil {
        return false 
    }
    
    if l.Val != r.Val {
        return false 
    }
    
    return rec(l.Left , r.Right ) && rec(l.Right , r.Left)
} ```