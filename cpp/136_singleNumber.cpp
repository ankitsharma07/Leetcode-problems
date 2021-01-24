#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums){
            unordered_map<int, int> counter;

            for(auto num : nums){
                counter[num]++;
            }

            unordered_map<int, int>::iterator itr;

            for(itr = counter.begin(); itr != counter.end(); itr++){
                if(itr->second == 1){
                    return itr->first;
                }
            }
            return 0;
        }
};

int main(){
    Solution obj_singleNum;
    vector<int> list = {4, 1, 2, 1, 2};
    int output = obj_singleNum.singleNumber(list);

    cout << "Output: " << output;
}
