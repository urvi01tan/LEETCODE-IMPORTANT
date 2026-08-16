class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        k=format(n,'032b')
       
        return k.count('1')
        