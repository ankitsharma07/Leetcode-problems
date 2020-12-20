#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            int size = nums.size();
            vector<int> ret;
            int difference;

            unordered_map<int, int> hash;

            for(int i = 0; i < size; i++){
                difference = target - nums[i];
                if(hash.find(difference) != hash.end() &&
                   hash.find(difference)->second != i){
                    ret.push_back(i);
                    ret.push_back(hash.find(difference)->second);

                    return ret;
                }
                hash[nums[i]] = i;
            }
            return ret;
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
