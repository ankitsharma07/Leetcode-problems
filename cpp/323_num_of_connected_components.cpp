#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:

        void dfs(vector<int> adjacentList[], vector<int> &visited, int src){
            visited[src] = 1;

            for(int i = 0; i < adjacentList[src].size(); i++){
                if(visited[adjacentList[src][i]] == 0){
                    dfs(adjacentList, visited, adjacentList[src][i]);
                }
            } 
        }

        int countComponents(int n, vector<vector<int>>& edges) {
            if (n == 0){
                return 0;
            }

            int components = 0;
            vector<int> visited(n, 0);
            vector<int> adjacentList[n];

            for(int i = 0; i < edges.size(); i++){
                adjacentList[edges[i][0]].push_back(edges[i][1]);
                adjacentList[edges[i][1]].push_back(edges[i][0]);
            }

            for(int i = 0; i < n; i++){
                if(visited[i] == 0){
                    components++;
                    dfs(adjacentList, visited, i);
                }
            }
            return components;
        }
};
