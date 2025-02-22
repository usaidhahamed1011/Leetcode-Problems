class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        s = set()
        l=[]
        for i in nums:
            if i in s:
                l.append(i)
            s.add(i)
        return l