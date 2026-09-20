class Solution(object):
    def reverseDegree(self, s):
        ans = 0
        for i in range(len(s)):
            p = (26 - (ord(s[i]) - ord('a'))) * (i+1)
            ans = ans+p
        return ans