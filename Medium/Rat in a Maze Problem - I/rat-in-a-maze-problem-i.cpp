//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void Maze(int i,int j,vector<vector<int>>&m,int n,string temp,vector<string>&res, vector<vector<int>> vis)
    {
        if(i>n-1 or j>n-1 or i<0 or j<0 or m[i][j]==0 or vis[i][j]==1) return;
        if(i==n-1 and j==n-1)
        {
            res.push_back(temp);
            return;
        }
        vis[i][j]=1;
        Maze(i-1,j,m,n,temp+'U',res,vis);
        Maze(i+1,j,m,n,temp+'D',res,vis);
        Maze(i,j-1,m,n,temp+'L',res,vis);
        Maze(i,j+1,m,n,temp+'R',res,vis);
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>res;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        Maze(0,0,m,n,"",res, vis);
        return res;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends