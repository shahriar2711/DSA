class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        nums1 = []
        j = k % len(nums)

        for i in range(len(nums) - j,len(nums)):
            nums1.append(nums[i])
        for i in range(0,len(nums) - j):
            nums1.append(nums[i])
        
        for i in range(len(nums1)):
            nums[i] = nums1[i]