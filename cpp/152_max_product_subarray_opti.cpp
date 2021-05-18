#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_ending_here = 1;
        int min_ending_here = 1;

        int max_so_far = 0;
        int flag = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                max_ending_here = max_ending_here * nums[i];
                min_ending_here = min(min_ending_here * nums[i], 1);
                flag = 1;
            }

            else if (nums[i] == 0){
                max_ending_here = 1;
                min_ending_here = 1;
            }

            else {
                int temp = max_ending_here;
                max_ending_here = max(min_ending_here * nums[i], 1);
                min_ending_here = temp * nums[i];
            }

            if (max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }
        }

        if(flag == 0 && max_so_far == 0) {
            return 0;
        }
        return max_so_far;
    }
};

int main() {
    Solution obj_max_product;

    vector<int> arr = {-2, 0, -1};
    int output = obj_max_product.maxProduct(arr);

    cout << output << endl;
}
