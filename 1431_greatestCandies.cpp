// problem statement: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
//
// author: Ankit Sharma

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            int maxCandies(*max_element(candies.begin(), candies.end()));
            vector<bool> ans(candies.size());

            for (int i=0; i < candies.size(); ++i){
                if (candies[i] + extraCandies >= maxCandies){
                    ans[i] = true;
                }
            }
            return ans;
        }
};

int main() {
    Solution objCandies;
    vector<int> candies = {2, 3, 5, 1, 3};
    vector<bool> result;
    int extraCandies = 3;

    result = objCandies.kidsWithCandies(candies, extraCandies);

    for(int i = 0; i < result.size(); i++){
        cout << result[i];
    }
}
