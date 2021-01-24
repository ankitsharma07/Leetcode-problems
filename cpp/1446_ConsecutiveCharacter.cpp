#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int maxPower(string s) {
        // find frequency of each character
        unordered_map <char, int> freqCounter;
        vector<int> freqValues;

        // check current character is present
        for(int i = 0; s[i]; i++){
            // if found insert frequency of 1
            if(freqCounter.find(s[i]) == freqCounter.end()){
                freqCounter.insert(make_pair(s[i], 1));
            }

            else {
                freqCounter[s[i]]++;
            }
        }

        for (auto& it : freqCounter) {
            // cout << it.first << ' ' << it.second << '\n';
            freqValues.push_back(it.second);
        }

        int maxPowerChar = *max_element(freqValues.begin(), freqValues.end());
        cout << maxPowerChar;

        return maxPowerChar;
    }
};

int main(){
    Solution obj_maxPower;
    string str = "leetcode";
    int result = obj_maxPower.maxPower(str);

    return 0;
}