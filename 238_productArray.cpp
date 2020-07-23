#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int length = nums.size();
            vector<int> fromStart(length);
            fromStart[0] = 1;
            vector<int> fromEnd(length);
            fromEnd[0] = 1;

            for(int i = 1; i < length; i++){
                fromStart[i] = fromStart[i-1] * nums[i - 1];
                fromEnd[i] = fromEnd[i-1] * nums[length - i];
            }

            vector<int> productArray(length);
            for(int i = 0; i < length; i++){
                productArray[i] = fromStart[i] * fromEnd[length - 1 - i];
            }
            return productArray;
    }
};

int main(){
    Solution obj_prodArr;
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> output;

    output = obj_prodArr.productExceptSelf(vec);

    for(int i=0; i < output.size(); i++){
        cout << output[i] << " ";
    }
}
