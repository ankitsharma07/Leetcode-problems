// problem statement: https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/


#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
        // traverse
        int trv = s.size() - 1;

        // initial return string
        string ret = "";

        // traversing from the back
        while(trv >= 0){
            // handle 2 digits
            if(s[trv] == '#'){
                // add 96 to the substring which correct for starting at a
                ret.push_back(96 + stoi(s.substr(trv-2, 2)));
                trv -= 3;
            }

            // one digit
            else {
                // add character 48 is between 'a' and '0'
                ret.push_back(48 + s[trv]);
                trv -= 1;
            }
        }

        // reverse because traversed from backward
        reverse(ret.begin(), ret.end());
        return ret;
    }
};

int main(){
    Solution obj_decrypt;
    string s = "10#11#12";
    string outp = obj_decrypt.freqAlphabets(s);
    cout << outp << endl;
}
