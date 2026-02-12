class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        applecount = sum(apple)
        capacity.sort(reverse = True)

        for bc, bcap in enumerate(capacity):
            applecount -=bcap
            if applecount <=0: return bc+1
