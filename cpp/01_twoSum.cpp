// problem statement: https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector <int> twoSum(vector<int>& nums, int target){
            vector<int> vec;
            for (int i = 0; i < nums.size(); i++){
                for(int j = i+1; j < nums.size(); j++){
                    if(nums[j] == target - nums[i]){
                        vec.push_back(i);
                        vec.push_back(j);
                    }
                }
            }
            return vec;
        }
};


int main() {
    Solution obj_twoSum;
    vector<int> sample = {2, 7, 11, 15};
    int target = 9;
    vector<int> output;

    output = obj_twoSum.twoSum(sample, target);

    for(int i=0; i < output.size(); i++){
        cout << output[i] << " ";
    }

    return 0;
}
