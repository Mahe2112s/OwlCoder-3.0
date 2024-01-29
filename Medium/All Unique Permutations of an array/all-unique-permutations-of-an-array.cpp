//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:   
    vector<vector<int>>v;
    void permutation(vector<int>&arr,vector<int>&f,vector<int>&a,map<vector<int>,int>&mp)
    {
        if(a.size()==arr.size())
        {
            if(mp[a]==0)
            {
                v.push_back(a);
                mp[a]++;
            }
            return;
        }
        //recursive case
        for(int i=0;i<arr.size();i++)
        {
            if(f[i]==0)
            {
                f[i]=1;
                a.push_back(arr[i]);
                permutation(arr,f,a,mp);
                a.pop_back();
                f[i]=0;
            }
            
        }
        
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<int>a;
        vector<int>visit(n,0);
        map<vector<int>,int>mp;
        permutation(arr,visit,a,mp);
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends