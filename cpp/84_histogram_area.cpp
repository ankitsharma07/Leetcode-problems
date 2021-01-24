/*
** Include one bar in full -- Reference corresponding area
**
*/
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> left(n), right(n);
        stack<int> area_stack;

        for(int i = 0; i < n; i++){
            // fill left array
            if(area_stack.empty()){
                left[i] = 0;
                area_stack.push(i);
            }
            else {
                while(!area_stack.empty() and heights[area_stack.top()] >= heights[i]){
                    area_stack.pop();
                }
                left[i] = area_stack.empty() ? 0 : area_stack.top() + 1;
                area_stack.push(i);
            }
        }

        // clear the stack
        while(!area_stack.empty())
            area_stack.pop();

        // fill right
        for(int i = n-1; i >= 0; --i){
            if(area_stack.empty()){
                right[i] = n-1;
                area_stack.push(i);
            }
            else {
                while(!area_stack.empty() and heights[area_stack.top()] >= heights[i]){
                    area_stack.pop();
                }
                right[i] = area_stack.empty() ? n-1 : area_stack.top() - 1;
                area_stack.push(i);
            }
        }
        int max_area = 0;
        for(int i = 0; i < n; i++){
            max_area = max(max_area, heights[i]*(right[i]-left[i]+1));
        }
        return max_area;
    }
};
