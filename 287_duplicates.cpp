#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            int n = nums.size();
            int duplicateNumber;

            // calculate the index frequency
            for(int i = 0; i < n; i++){
                int index = nums[i] % n;
                nums[index] += n;
            }

            // check if more than once
            for(int i = 0; i < n; i++){
                if((nums[i] / n) >= 2){
                    duplicateNumber = i;
                }
            }
        return duplicateNumber;
    }
};

int main() {
    Solution obj_dups;
    int duplicate;
    vector<int> inputVec = {1,3,4,2,2};

    duplicate = obj_dups.findDuplicate(inputVec);
    cout << "Duplicate element is: " << duplicate << endl;
}
