'''
268. Missing Number
Question: https://leetcode.com/problems/missing-number/?envType=daily-question&envId=2024-02-20

Note: 
'''

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum = 0
        n = len(nums)
        for i in nums:
            sum += i
        nsum = (n*(n+1))//2
        return (nsum - sum)
