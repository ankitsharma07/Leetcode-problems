// using hashing

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        unordered_map<int, int> hash_map;

        // iterate through the array and save elements into the hash map
        for(int i = 0; i < nums.size(); i++){
            if(hash_map.find(target - nums[i]) != hash_map.end()){
                output.push_back(hash_map[target-nums[i]]);
                output.push_back(i);
                return output;
            }
            hash_map[nums[i]] = i;
        }
        return output;
    }
};
