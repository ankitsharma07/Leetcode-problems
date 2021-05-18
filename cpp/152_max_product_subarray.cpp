#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = nums[0];

        for(int i = 0; i < nums.size(); i++){
            int mul = nums[i];

            // traversing in a subarray
            for(int j = i+1; j < nums.size(); j++){
                // updating result every time
                result = max(result, mul);
                mul *= nums[j];
            }
            result = max(result, mul);
        }
        return result;
    }
};
