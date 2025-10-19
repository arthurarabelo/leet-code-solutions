class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash = {}
        for i, element in enumerate(nums):
            if hash.get(element) is not None:
                return[hash.get(element), i]
            hash[target-element] = i
