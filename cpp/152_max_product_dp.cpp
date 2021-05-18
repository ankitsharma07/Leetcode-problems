#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }

        int max_so_far = nums[0];
        int min_so_far = nums[0];
        int result = max_so_far;

        for (int i = 1; i < nums.size(); i++){
            int current = nums[i];
            int temp_max = max(current, max(max_so_far * current, min_so_far * current));
            min_so_far = min(current, min(max_so_far * current, min_so_far * current));

            max_so_far = temp_max;

            result = max(max_so_far, result);
        }

        return result;
    }
};
