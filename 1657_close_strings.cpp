// problem: https://leetcode.com/problems/determine-if-two-strings-are-close/

#include <iostream>
#include <string>
#include <set>
#include <unordered_map>


using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        set<int> w1_letters, w2_letters, w1_frequency, w2_frequency;
        unordered_map<char, int> word1_map, word2_map;

        for(auto i : word1) {
            w1_letters.insert(i);
            word1_map[i]++;
        }

        for (auto i : word2){
            w2_letters.insert(i);
            word2_map[i]++;
        }

        for (auto [key, value] : word1_map) w1_frequency.insert(value);
        for (auto [key, value] : word2_map) w2_frequency.insert(value);

        return w1_letters == w2_letters && w1_frequency == w2_frequency;
    }
};
