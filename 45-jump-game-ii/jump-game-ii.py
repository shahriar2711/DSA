class Solution:
    def jump(self, nums: List[int]) -> int:
        near = far = jump = 0

        while far < len(nums) - 1:
            max_reach = 0 

            for i in range(near , far+1):
                max_reach = max(max_reach , i+nums[i])

            near = far+1
            far = max_reach
            jump += 1
        
        return jump