#include <iostream>

using namespace std;


class Solution {
public:
    int brokenCalc(int X, int Y) {
        // work backwards
        // divide by when y is even and add 1

        /*
        ** Algorithm: While Y > X, add 1 if it is odd or divide by 2 if even.
        ** X - Y additions to reach X
        */

        int output = 0;

        while (Y > X) {
            output += 1;

            if(Y%2){
                Y += 1;
            }
            else{
                Y /= 2;
            }
        }
        return output + X-Y;
    }
};
