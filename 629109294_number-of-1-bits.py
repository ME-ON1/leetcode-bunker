id = 629109294 
lang = python3 
runtime  = 52 ms 
memory = 13.9 MB
title_slug = number-of-1-bits
code =

 class Solution:
    def hammingWeight(self, n: int) -> int:
        cnt = 0
        while n != 0:
            n = ( n ) & (n - 1)
            cnt+=1
        return cnt