id = 529221603 
lang = golang 
runtime  = 8 ms 
memory = 4.4 MB
title_slug = linked-list-cycle
code =
 ```/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func hasCycle(head *ListNode) bool {
    if head == nil {
        return false;
    }
    var fast *ListNode = head ;
    var slow *ListNode = head ;
    
    for fast.Next != nil  && fast.Next.Next != nil  {
        fast = fast.Next.Next ;
        slow = slow.Next ;
        
        if slow == fast {
            return true  
        }
    }
    return false;
}```