//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int>v(n);
        map<int,int>mp;
        v[0]=0;
        mp[v[0]]=1;
        for(int i=1;i<n;i++)
        {
            int temp=(v[i-1]-i);
            if(temp<0 or mp[temp]>=1)
            {
                v[i]=v[i-1]+i;
                mp[v[i]]++;
            }
            else
            {
              v[i]=v[i-1]-i;  
              mp[v[i]]++;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends