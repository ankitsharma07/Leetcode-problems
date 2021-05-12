#!/usr/bin/env python3
class Solution:
    def containsDuplicate(self, nums) -> bool:
        nums.sort()

        for i in range(nums + 1):
            if nums[i] == nums[i+1]:
                return True
        return False


if __name__=="__main__":
    nums = [1,2,3,4]
    obj_dups = Solution()
    print(obj_dups.containsDuplicate(nums))
