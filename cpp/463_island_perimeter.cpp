#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int up, down, left, right;
        int result = 0;

        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){

                // main logic goes here
                if(grid[i][j] == 1){
                    if(i == 0) { up = 0;}
                    else { up = grid[i-1][j]; }

                    if(j == 0) { left = 0; }
                    else { left = grid[i][j-1]; }

                    if (i == rows-1) { down = 0; }
                    else { down = grid[i+1][j]; }

                    if(j == cols-1) { right = 0; }
                    else { right = grid[i][j+1]; }

                    result += 4 - (up+down+right+left);
                }
            }
        }
        return result;
    }
};
