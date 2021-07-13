#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> encoding1;
        unordered_map<char, char> encoding2;

        for(int i = 0; i < s.size(); i++){
            if(encoding1.find(s[i]) != encoding1.end()){
                if(encoding1[s[i]] != t[i]){
                    return false;
                }
            }
            else if(encoding2.find(t[i]) != encoding2.end()){
                if(encoding2[t[i]] != s[i]){
                    return false;
                }
            }
            else {
                encoding1[s[i]] = t[i];
                encoding2[t[i]] = s[i];
            }
        }
        return true;
    }
};
