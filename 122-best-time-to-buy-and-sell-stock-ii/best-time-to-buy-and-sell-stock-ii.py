class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        start = prices[0]
        max = 0

        for i in range(len(prices)):
            if(start < prices[i]):
                max += prices[i] - start
            start = prices[i]
        return max