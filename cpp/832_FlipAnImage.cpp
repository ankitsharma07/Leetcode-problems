// problem statement: https://leetcode.com/problems/flipping-an-image/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i = 0; i < A.size(); ++i){
            reverse(A[i].begin(), A[i].end());
        }

        for(int i = 0; i < A.size(); ++i){
            for(int j = 0; j < A[0].size(); ++j){
                if(A[i][j] == 1){
                    A[i][j] = 0;
                }
                else {
                    A[i][j] = 1;
                }
            }
        }
        return A;
    }
};

int main(){
    Solution obj_flipAndInvert;
    vector<vector<int>> matrix = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> output = obj_flipAndInvert.flipAndInvertImage(matrix);

    for(int i = 0; i  < output.size(); i++){
        for(int j = 0; j < output.size(); j++){
            cout << output[i][j] << "\t";
        }
    }
    return 0;
}
