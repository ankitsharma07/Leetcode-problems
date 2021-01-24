#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int uniquePaths(int m, int n){
            // 2D table to store results of subproblem
            vector<vector<int>> count(m, vector(n, 1));
            // condition for m=1 and n=1
            for(int i = 0; i < m; i++){
                count[i][0] = 1;
            }

            for(int j = 1; j < n; j++){
                count[0][j] = 1;
            }

            // count for other cells
            for(int i=1; i < m; i++){
                for(int j=1; j < n; j++){
                    count[i][j] = count[i-1][j] + count[i][j-1];
                    // diagonal movement allowed then + count[i-1][j-1] 
                }
            }

            return count[m-1][n-1];
        }
};

int main(){
    Solution obj_uniquePaths;
    int m = 7, n = 3;

    int output = obj_uniquePaths.uniquePaths(m, n);
    cout << "Output: " << output;

    return 0;
}
