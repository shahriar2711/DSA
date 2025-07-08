class Solution:
    def canJump(self, nums: List[int]) -> bool:
        max_reach = 0
        length = len(nums)

        for i in range(len(nums) - 1):
            if i <= max_reach:
                max_reach = max(max_reach , i+nums[i])
        
        if(max_reach >= length - 1):
            return True
        else:
            return False