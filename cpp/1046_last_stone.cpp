// problem: https://leetcode.com/problems/last-stone-weight/
//
// about priority queue: https://en.cppreference.com/w/cpp/container/priority_queue

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int> pq;

        for(int i = 0; i < n; i++){
            pq.push(stones[i]);
        }

        while(pq.size() > 1){
            int largest = pq.top();
            pq.pop();

            int second_largest = pq.top();
            pq.pop();

            if(largest != second_largest){
                pq.push(largest - second_largest);
            }
        }

        if(pq.size() == 0){
            return 0;
        }

        return pq.top();
    }
};

int main() {
    Solution obj_lastwt;
    vector<int> input = {2,7,4,1,8,1};
    int output = obj_lastwt.lastStoneWeight(input);

    cout << "Weight of the last stone: " << output;

    return 0;
}
