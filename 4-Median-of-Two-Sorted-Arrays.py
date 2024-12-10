class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n=len(nums1)+len(nums2)
        l=[]
        for i in range(n):
            if i<len(nums1):
                l.append(nums1[i])
        for i in nums2:
            l.append(i)
        l.sort()
        if n%2==0:
            i=n//2
            j=i-1
            return (l[i]+l[j])/2
        else:
            return (l[n//2])