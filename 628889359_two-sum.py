id = 628889359 
lang = python3 
runtime  = 144 ms 
memory = 15.2 MB
title_slug = two-sum
code =

 class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = {} 
        newList = []
        for i, val in enumerate(nums):
            if dic.get(target - val) != None :
                newList.append(i)
                newList.append(dic[target-val])
                break
            else :
                dic[val] = i 
        return newList