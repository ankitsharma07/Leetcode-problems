#include <climits>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN;
        int max_ending_here = 0;

        for (int i = 0; i < nums.size(); i++){
            max_ending_here = max_ending_here + nums[i];

            if (max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }
            else if (max_ending_here < 0){
                max_ending_here = 0;
            }
        }
        return max_so_far;
    }
};


int main() {
    Solution obj_max_sum;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int largest_sum = obj_max_sum.maxSubArray(nums);
n
    cout << "Largest sum: " << largest_sum;
}
