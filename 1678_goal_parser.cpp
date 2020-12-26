#include <iostream>

using namespace std;


class Solution {
public:
    string interpret(string command) {
        string s = "";

        for (int i = 0; i < command.length(); i++){
            if (command[i] == '('){
                if (command[i+1] == ')'){
                    i++;
                    s += "o";
                }
                else {
                    i += 3;
                    s += "al";
                }
            }
            else {
                s += command[i];
            }
        }
        return s;
    }
};
