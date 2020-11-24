#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> timestamp(1001, 0);

        for(auto trip : trips){
            timestamp[trip[1]] += trip[0];
            timestamp[trip[2]] -= trip[0];
        }

        int count = 0;
        for(auto number : timestamp){
            count += number;
            if (count > capacity){
                return false;
            }
        }
        return true;
    }
};