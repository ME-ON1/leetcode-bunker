id = 628899971 
lang = python3 
runtime  = 540 ms 
memory = 25.9 MB
title_slug = contains-duplicate
code =

 class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dic = {}
        
        for val in nums :
            if dic.get(val) == None :
                dic[val] =1;
            else:
                dic[val ] += 1
            
            
        print(dic)
        for i in dic.values() :
            if i >= 2 :
                return True
        return False 