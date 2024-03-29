//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int dp[101][101][101];
    int path(vector<vector<int>>&arr,int i,int j,int n,int k)
    {
        if(i==n-1 && j==n-1){
            if(k-arr[i][j]==0){
                 return 1;
            }
            return 0;
        }
        if(i>=n or j>=n or k<0) return 0;
        if(dp[i][j][k]!=-1){
            return dp[i][j][k];
        }
        int a = path(arr,i+1,j,n,k-arr[i][j]);
        int b= path(arr,i,j+1,n,k-arr[i][j]);
        return  dp[i][j][k] = (a+b);
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        
        //code here
        // vector<vector<int>>vis(n,vector<int>(n,0));
        memset(dp,-1,sizeof(dp));
        return path(arr,0,0,n,k);
    
        
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends