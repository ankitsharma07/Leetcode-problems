// problem statement: https://leetcode.com/problems/jewels-and-stones/
/*
** J: types of stones that are jewels S: stones we have
** J: distinct elements
** Case sensitive
*/

#include <iostream>
#include <set>
#include <string>

using namespace std;

class Solution {
    public:
        int numJewelsInStones(string J, string S){
            int count=0;
            set<char> aSet;

            // make a set for all the characters
            for(char i:J){
                aSet.insert(i);
            }

            // matched and maintained a count for each character and increased
            for(char i:S){
                count += aSet.count(i);
            }
            return count;
        } 
};

int main() {
    Solution obj_JandS;

    int output = obj_JandS.numJewelsInStones("aA", "aAAbbbbb");

    cout << output << endl;
}
