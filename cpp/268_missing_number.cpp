#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sum of n numbers: n(n+1)/2

        int len = nums.size();
        int expected_sum = len * (len + 1)/2;
        int actual_sum = 0;

        for(int i = 0; i < nums.size(); i++){
            actual_sum += nums[i];
        }

        return expected_sum - actual_sum;
    }
};
