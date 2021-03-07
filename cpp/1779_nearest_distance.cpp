#include <climits>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minimum_distance = INT_MAX;
        int position = -1;
        int manhattan_dis;

        for(int i = 0; i < points.size(); i++){
            if(points[i][0] == x || points[i][1] == y){
                manhattan_dis = abs(x - points[i][0]) + abs(y - points[i][1]);

                if(manhattan_dis < minimum_distance){
                    minimum_distance = manhattan_dis;
                    position = i;
                }
            }
        }
        return position;
    }
};
