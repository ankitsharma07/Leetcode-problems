// problem statement - https://leetcode.com/problems/excel-sheet-column-number/

/*
** A - 1
** B - 2
**
** Z - 26
** AA - 27
** AB - 28
** ..
** ..
** ..
** It's similar to converting binary into decimal, just the base here is 26
**
** Example:
** CDA
** 3*26*26 + 4*26 + 1
**
** result = 26*result + s[i] - 'A' + 1
*/

#include <iostream>

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;

        for(const auto& c : s){
            result *= 26;
            result += c - 'A' + 1;
        }
        return result;
    }
};

int main() {
    Solution obj_excelCol;
    int output = obj_excelCol.titleToNumber("CDA");
    cout << "Output: " << output << endl;

    return 0;
}
