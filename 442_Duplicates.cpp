// problem statement: https://leetcode.com/problems/find-all-duplicates-in-an-array/

/*
**
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]
*/

#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dupValues;
        unordered_map<int, int> hashTable;

        // traverse through array elements and count frequencies
        for(int i = 0; i < nums.size(); i++){
            hashTable[nums[i]]++;
        }

        // print the fequencies traversing through the hash table
        for(auto i : hashTable){
            // cout << i.first << " " << i.second << "\n";
            if (i.second > 1){
                dupValues.push_back(i.first);
            }
        }
        return dupValues;
    }
};

int main(){
    Solution obj_duplicates;
    vector<int> vecArr = {4,3,2,7,8,2,3,1};
    vector<int> outputArr;

    outputArr = obj_duplicates.findDuplicates(vecArr);

    for(auto i : outputArr){
        cout << outputArr[i] << " ";
    }

    return 0;
}


