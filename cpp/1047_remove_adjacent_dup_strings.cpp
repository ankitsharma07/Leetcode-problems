#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    string removeDuplicates(string S) {
        // put non-duplicate element in the stack
        stack<char> st;
        string output = "";

        for(auto current : S){
            if(st.empty()){
                st.push(current);
            }
            else if(st.top() == current){
                st.pop();
            }
            else {
                st.push(current);
            }
        }

        while(!st.empty()){
            output += st.top();
            st.pop();
        }

        reverse(output.begin(), output.end());

        return output;
    }
};
