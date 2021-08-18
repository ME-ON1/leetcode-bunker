id = 529257104 
lang = golang 
runtime  = 4 ms 
memory = 3.8 MB
title_slug = linked-list-cycle-ii
code =
 ```/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func detectCycle(head *ListNode) *ListNode {
    if head == nil || head.Next == nil {
        return nil ;
    }
    
    fast := head ;
    slow := head ;
    
    for fast.Next != nil && fast.Next.Next != nil {
        fast = fast.Next.Next 
        slow = slow.Next 
        
        if slow == fast {
            slow = head 
            for slow != fast {
                slow = slow.Next ;
                fast = fast.Next ;
            }
            return slow 
        }
    }
    return nil 
}```