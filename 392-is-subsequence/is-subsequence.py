class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j = 0
        for ch in t:
            if j < len(s) and ch == s[j]:
                j += 1
        return j == len(s)