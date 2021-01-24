// problem statement: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
        int countNegatives(vector<vector<int>>& grid) {
        int ans(0);
        // brute force method
        for(const vector<int>& row: grid){
            for(const int& i: row){
                if (i < 0){
                    ans++;
                }
            }
        }
        return ans;
    }
};
