#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps (int num) {
        int steps = 0;
        while(num != 0) {
            if (num%2 == 0) {
                    num /= 2;
                    steps++;
            }
            else {
                    num -= 1;
                    steps++;
            }
        }
    return steps;
    }
};

int main(){
    Solution obj_steps;
    int number = 14;
    int output;

    output = obj_steps.numberOfSteps(number);

    cout << output << endl;
    
}
