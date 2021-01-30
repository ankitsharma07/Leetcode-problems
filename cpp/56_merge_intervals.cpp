#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged_intervals;

        if(intervals.size() == 0) {
            return merged_intervals;
        }

        sort(intervals.begin(), intervals.end());

        vector<int> temp_interval = intervals[0];

        for (auto i : intervals) {
            if(i[0] <= temp_interval[1]) {
                temp_interval[1] = max(i[1], temp_interval[1]);
            }
            else {
                merged_intervals.push_back(temp_interval);
                temp_interval = i;
            }
        }

        merged_intervals.push_back(temp_interval);
        return merged_intervals;
    }
};
