// problem statement
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums){
            vector<int> countArr;
            int count = 0;

            for(int i=0; i<nums.size(); ++i){
                for(int j = 0; j < nums.size(); ++j){
                    if(nums[i] > nums[j]){
                        count++;
                    }
                }
                countArr.push_back(count);
                count = 0;
            }
            return countArr;
        }
};


int main(){
    Solution obj_smallNumber;
    vector<int> testVec = {8, 1, 2, 2, 3};
    vector<int> result;

    result = obj_smallNumber.smallerNumbersThanCurrent(testVec);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << "\t";
    }
    return 0;
}
