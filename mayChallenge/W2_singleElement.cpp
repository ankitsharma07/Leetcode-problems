#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        
        while(low < high) {
            int mid = low  + (high - low)/2; // prevents overflow
            bool evenLength = (high - mid)%2 == 0;

            if (nums[mid]==nums[mid+1]){
                if(evenLength){
                    low = mid+2;
                }
                else {
                    high = mid-1;
                }
            }
            else if (nums[mid] == nums[mid-1]){
                if(evenLength){
                    high = mid-2;
                }
                else {
                    low = mid+1;
                }
            }
            else
                return nums[mid];
        }
        return nums[low];
    }
};

int main () {
    vector<int> vec = {1,1,2,3,3,4,4,8,8};
    Solution obj_singleElment;

    int result = obj_singleElment.singleNonDuplicate(vec);

    cout << result << endl;

    return 0;
}
