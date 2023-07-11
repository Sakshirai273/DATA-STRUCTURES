#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution{
    public:
    vector<int>bfsOfGraph(int V , vector<int> adj[]){
        int vis[V] ={0}; //visited array of size V
        vis[0]=1;
        queue<int>q;
        q.push(0);
        vector<int> bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};

//Time complexity :- node goes once into BFS and runs on all its neighbors or degrees --> O(N)+ O(2E)
// Space complexity:- queue, visisted node , bfs list --> O(3N) ~ O(N)