input : [2,7,11,15]
target :  9

output: [0,1]

explain: 
   2+7 = 9 (target)
index of 2 and 7 are 0,1


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dicti={}
        for i in range(0,len(nums)):
            h=nums[i]
            dif=target-h
            if h not in dicti:
                dicti[dif]=i
            else:
                return[dicti[h],i]
