// problem statement: https://leetcode.com/problems/pascals-triangle/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        // create a triangle with numRows number of inner vector of size(1,1)
        vector<vector<int> > triangle(numRows, vector<int> (1,1));

        if (numRows == 0){
            return triangle;
        }

        vector<int> prevRow;

        // start the loop from index=1 bc 0th index is initialized with 1.
        // if numRows = 1, we do not enter the loop and skips to the return statement

        for(int i = 1; i < numRows; i++){
            prevRow = triangle[i-1];

            for(int j = 1; j < i; j++){
                // fill up elements leaving first and last space
                triangle[i].push_back(prevRow[j] + prevRow[j-1]);
                }
            triangle[i].push_back(1);
        }

        vector<int> pascalRow;
        int k = 3;
        pascalRow = triangle[k];
        for(int i = 0; i < pascalRow.size(); i++){
            cout << pascalRow[i] << " ";
        }
        return triangle;
    }
};

int main(){
    Solution obj_pascalTri;
    int numberOfRows = 10;
    vector<vector<int> > output;
    output = obj_pascalTri.generate(numberOfRows);
    return 0;
}
