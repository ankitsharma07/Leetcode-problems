#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even_count = 0;
        int odd_count = 0;

        for (int i : position){
            if (i % 2 == 0){
                even_count += 1;
            }
            else {
                odd_count += 1;
            }
        }
        return min(even_count, odd_count);
    }
};

int main() {
    Solution obj_min_cost;

    vector<int> arr = {1, 2, 2, 2, 2};
    int output;

    output = obj_min_cost.minCostToMoveChips(arr);

    cout << "Min cost to move the chips: " << output << endl;
}
