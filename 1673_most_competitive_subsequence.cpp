/*
Keep a mono incrasing stackas result.
If current element a is smaller then the last element in the stack,
we can replace it to get a smaller sequence.

Before we do this,
we need to check if we still have enough elements after.
After we pop the last element from stack,
we have stack.size() - 1 in the stack,
there are A.size() - i can still be pushed.
if stack.size() - 1 + A.size() - i >= k, we can pop the stack.

Then, is the stack not full with k element,
we push A[i] into the stack.

Finally we return stack as the result directly.

 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> stack;

        for(int i = 0; i < nums.size(); ++i){
            while (!stack.empty() && stack.back() > nums[i] && stack.size() - 1 + nums.size() - i >= k){
                stack.pop_back();
            }
            if (stack.size() < k){
                stack.push_back(nums[i]);
            }
        }
        return stack;
    }
};
