class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        dict1 = {}

        for item in nums:
            if item in dict1:
                if dict1[item] < 2:
                    dict1[item] += 1
            else:
                dict1[item] = 1

        nums.clear()

        for key , values in dict1.items():
            nums.extend([key] * values)
        return len(nums)