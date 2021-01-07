#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());

            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == nums[i+1])
                    return nums[i];
            }
            return -1;
    }
};

int main() {
    Solution obj_dups;
    int duplicate;
    vector<int> inputVec = {1,3,4,2,2};

    duplicate = obj_dups.findDuplicate(inputVec);
    cout << "Duplicate element is: " << duplicate << endl;
}
