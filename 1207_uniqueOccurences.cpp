// problem statement: https://leetcode.com/problems/unique-number-of-occurrences/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hashMap;
        vector<int> checker;

        for (auto i : arr){
            hashMap[i]++;
        }

        unordered_map<int, int>::iterator itr;

        for(itr = hashMap.begin(); itr != hashMap.end(); itr++){
            if(count(checker.begin(), checker.end(), itr->second)){
                return false;
            }
            else {
                checker.push_back(itr->second);
            }
        }
        return true;
    }
};

int main(){
    Solution obj_uniqueOccur;
    vector<int> arr = {1,2,2,1,1,3,4,5};

    bool output = obj_uniqueOccur.uniqueOccurrences(arr);
    cout << output << endl;
}
