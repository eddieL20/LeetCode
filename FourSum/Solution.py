from typing import List

class Solution:
    def four_sum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        result = []

        for i in range(len(nums) - 3):
            for j in range(len(nums) - 2):
                k = j + 1
                l = len(nums) - 1
                while k < l:
                    current_sum = nums[i] + nums[j] + nums[k] + nums[l]
                    if current_sum == target:
                        result.append([nums[i], nums[j], nums[k], nums[l]])
                        k += 1
                        l -= 1
                    elif current_sum < target:
                        k += 1
                    else:
                        l -= 1
        return result