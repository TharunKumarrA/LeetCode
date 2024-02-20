'''
231. Power of Two
Question: https://leetcode.com/problems/power-of-two/description/?envType=daily-question&envId=2024-02-19

Note: Time taken to compile was slower for python (beats ~60%, but C++ beats 100%)
'''

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if (n <= 0):
            return False
        while n > 1:
            rem = n%2
            if (rem != 0):
                return False
            n = n/2
        return True
