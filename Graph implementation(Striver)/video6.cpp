#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class solution {
    private:
    void dfs (int node , vector<int> adj[] , int vis[], vector<int> &ls) { //node ,adj. lis,visited array , list
        vis[node] = 1;
        ls.push_back(node);
        //traverse all its neighbours 
        for(auto it: adj[node]){
          if(!vis[it]){
            dfs(it, adj, vis, ls);
          }
        }
    }
    public:
    vector<int> dfsOfGraph(int V , vector<int>adj[]){
        //code here 
        int vis[V] ={0};
        int start= 0;
        vector<int>ls ;
        dfs(start,adj,vis,ls);
        return ls ;
    }
};

//S.C --> O(N)+O(N)+O(N) --> O(3N)
//T.C --> O(N)+(2E) [For undirected graph] , for directed graph it will depend upon no. of edges.