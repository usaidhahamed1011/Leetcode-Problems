class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l=[]
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if(i!=j):
                    sum1=nums[i]+nums[j]
                    if sum1==target:
                        l.append(i)
                        l.append(j)
                        break
        return set(l)
        