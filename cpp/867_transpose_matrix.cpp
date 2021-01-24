#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int M = A.size();
        int N = A[0].size();

        vector<vector<int>> transpose(N, vector<int>(M, 0));

        for(int i = 0; i < M; ++i){
            for(int j = 0; j < N; ++j){
                transpose[j][i] = A[i][j];
            }
        }

        return transpose;
    }
};
