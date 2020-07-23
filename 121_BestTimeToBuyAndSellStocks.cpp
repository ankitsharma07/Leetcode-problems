// problem statement: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;

        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};

int main(){
    Solution obj_maxProfit;

    vector<int> stocks = {7, 1, 5, 3, 6, 4};
    int maximumProfit = obj_maxProfit.maxProfit(stocks);

    cout << "Maximum Profit is: " << maximumProfit << "\n";

    return 0;
}
