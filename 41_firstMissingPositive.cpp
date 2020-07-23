// problem statment: https://leetcode.com/problems/first-missing-positive/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int number = 1;

        vector<int>::iterator begin = nums.begin();

        while(begin != nums.end() && (*begin) != 1){
            ++begin;
        }

        for(;begin != nums.end(); ++begin){
            if((*begin) == number){
                ++number;
            }
        }
        return number;
    }
};

int main(){
    Solution obj_missing;
    vector<int> vec = {3, 4, -1, 1};
    int output = obj_missing.firstMissingPositive(vec);

    cout << "First missing number is: " << output;
}
