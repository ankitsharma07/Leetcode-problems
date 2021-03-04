#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int countGoodRectangles(vector<vector<int> >& rectangles) {
        int count = 0, max = 0;

        for(vector<int> rectangle: rectangles) {
            int side = min(rectangle[0], rectangle[1]);  // minimum from width and length

            if(side > max){
                count = 1;
                max = side;
            }
            else if (side == max) {
                count++;
            }
        }
        return count;
    }
};
