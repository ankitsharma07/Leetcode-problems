#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
    public:
        string frequencySort(string s) {
            unordered_map<char, int> frequency;
            for(auto c : s){
                ++frequency[c];
            }

            priority_queue<pair<int, char>> maxHeap;
            for (auto p : frequency) {
                maxHeap.push({p.second, p.first});
            }

            string result = "";
            while( !maxHeap.empty() ){
                auto elmt = maxHeap.top();
                maxHeap.pop();
    
                while(elmt.first--){
                    result += elmt.second;
                }
            }
            return result;
    }
};


int main(){
    Solution obj_sortChar;
    string inp = "tree";

    string output;

    output = obj_sortChar.frequencySort(inp);

    cout << output << endl;
}
