#include <iostream>
using namespace std;
int main(){
    int n , m; // n is no. of nodes , m is no. of edges 
    cin >> n >> m;
   int adj[n+1][m+1]; // adjacency matrix to store the egdes  - TIME COMPLEXITY :- O(N) , SPACE COMPLEXITY :- O(N^2)
   for(int i =0;i<m ;i++){
    int u,v; //starting node , ending node of an edge
    cin >> u >> v;
    adj[u][v] = 1; //mark true for interaction and reverse interaction 
    adj[v][u] = 1;
   }
   return 0;
}



#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n , m; // n is no. of nodes , m is no. of edges 
    cin >> n >> m;
   vector <int> adj[n+1]; // adjacency matrix to store the egdes  - TIME COMPLEXITY :- O(N) , SPACE COMPLEXITY :- O(2E)
   for(int i =0;i<m ;i++){
    int u,v; //starting node , ending node of an edge
    cin >> u >> v;
    adj[u].push_back(v); //push every V for U, all the adjacent nodes  
    adj[v].push_back(u);
   }
   return 0;
}
