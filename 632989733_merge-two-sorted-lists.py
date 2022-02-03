id = 632989733 
lang = python3 
runtime  = 32 ms 
memory = 13.9 MB
title_slug = merge-two-sorted-lists
code =

 # Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, A: Optional[ListNode], B: Optional[ListNode]) -> Optional[ListNode]:
        tmp_head = A 
        tmp_head = B 
        newlist = new_head = ListNode(0)

        while A and  B :
            if A.val < B.val :
                new_head.next = ListNode(A.val)
                # new_head = new_head.next 
                A = A.next 
            else :
                new_head.next = ListNode(B.val) 

                B = B.next 
            new_head = new_head.next 
        
        if A != None :
            new_head.next = A 
            # A = A.next 
        else:
            new_head.next = B 
        return newlist.next 