// problem statement: https://leetcode.com/problems/shuffle-the-array/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> shuffle(vector<int>& nums, int n){
            vector<int> shuffledArr;

            for(int i = 0; i < n; ++i){
                shuffledArr.push_back(nums[i]),
                shuffledArr.push_back(nums[i+n]);
            }

            return shuffledArr;
        }
};

int main(){
    Solution obj_shuffleArr;
    vector<int> testVec = {2, 5, 1, 3, 4, 7};
    int n = 3;
    vector<int> output;

    output = obj_shuffleArr.shuffle(testVec, n);

    for (int i = 0; i < output.size(); i++){
        cout << output[i] << "\t";
    }
}
