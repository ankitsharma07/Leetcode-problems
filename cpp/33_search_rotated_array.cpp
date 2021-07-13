#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                return mid;
            }

            if(nums[0] <= target < nums[mid] || target < nums[mid] < nums[0] || nums[mid] < nums[0] <= target){
                right = mid - 1;
            }

            else {
                left = mid + 1;
            }
        }
        return -1;
    }
};
