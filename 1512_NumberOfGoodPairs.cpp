// problem statement: https://leetcode.com/problems/number-of-good-pairs/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> hashTable;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            if (hashTable.find(nums[i]) != hashTable.end()){
                count += hashTable[nums[i]];
            }
            hashTable[nums[i]]++;
        }
        return count;
    }
};

int main(){
    Solution obj_goodPairs;
    vector<int> nums = {1, 1, 1, 1};
    int goodPairs = obj_goodPairs.numIdenticalPairs(nums);

    cout << "Number of good pairs: " << goodPairs << "\n";

    return 0;
}
