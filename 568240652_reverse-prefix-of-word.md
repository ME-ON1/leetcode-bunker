id = 568240652 
lang = python3 
runtime  = 32 ms 
memory = 14.2 MB
title_slug = reverse-prefix-of-word
code =

 class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        if ch in word:
              t = word[0 : word.index(ch) + 1 ]
              occ = word.index(ch) 
              return t[::-1] + word[occ + 1: len(word)]  
        else:
            return word
        