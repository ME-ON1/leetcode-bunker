id = 632207887 
lang = python3 
runtime  = 45 ms 
memory = 13.8 MB
title_slug = partition-list
code =

 # Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        
        beforeHead = beforeList = ListNode(None)
        afterList = afterHead = ListNode(None) 
        
        while head != None :
            if head.val < x :
                beforeList.next = head
                # print(beforeList.val)
                beforeList = beforeList.next 
            else:
                afterList.next = head
                # print(afterList.val)
                afterList = afterList.next
            head = head.next 
        afterList.next = None
        beforeList.next = afterHead.next 
        return beforeHead.next 