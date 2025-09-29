class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations.sort(reverse = True)
        h = 0

        for index , item in enumerate(citations, start=1):
            if item >= index:
                h = index

        return h