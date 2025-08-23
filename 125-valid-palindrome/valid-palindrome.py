class Solution:
    def isPalindrome(self, s: str) -> bool:
        newtext = ''.join([ch for ch in s if ch.isalnum()])
        result = newtext.lower()

        left = 0
        right = len(result) - 1
        res = 1
        
        while(left < right):
            if(result[left] == result[right]):
                left += 1
                right -= 1
            else:
                res = 0
                break

        if(res == 1):
            return True
        else:
            return False