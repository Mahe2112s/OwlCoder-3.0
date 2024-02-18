//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
void BFS(vector<int>adj[],int node,vector<int>&minpath){
    queue<int>q;
    q.push(node);
    minpath[node]=0;
    while(!q.empty())
    {
        int t=q.front();
       // cout<<t<<" ";
        q.pop();
        for(auto it:adj[t]){
            //cout<<it<<" ";
            if(minpath[it]==-1){
                q.push(it);
                minpath[it]=minpath[t]+1;
            }
        }
    //    cout<<endl;
    }
}
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<int>minpath(N,-1);
        vector<int>adj[N+1];
        int e=edges.size();
        for(int i=0;i<e;i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        BFS(adj,src,minpath);
        return minpath;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends