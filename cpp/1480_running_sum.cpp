#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int running_sum = 0;
        vector<int> sum;

        for (int i=0; i<nums.size(); i++){
            running_sum += i;
            sum.push_back(running_sum);
        }
        return sum;
    }
};
