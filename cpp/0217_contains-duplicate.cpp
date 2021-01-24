#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequencyTable;

        // traverse the array and count the frequency
        for (int i = 0; i < nums.size(); i++){
            frequencyTable[nums[i]]++;
        }

        // traverse the frequency table
        for (auto i : frequencyTable){
            if (i.second > 1) {
                return true;
            }
        }
        return false;
    }
};
