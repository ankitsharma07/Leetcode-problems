#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {

        // sorting in descending order
        sort(A.begin(), A.end(), greater<int>());

        for(int i = 0; i < A.size(); i++){
            // return if there is no duplicate
            if(i == A.size() - 1 || A[i] != A[i+1]){
                return A[i];
            }

            while(i < A.size() - 1 && A[i] == A[i+1]){
                i++;
            }
        }
        return -1;
    }
};
