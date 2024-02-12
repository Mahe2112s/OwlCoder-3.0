//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    const long mod=1e9+7;
    long long sequence(int n){
        // code here
        long long s=0,x=1;
        for(int i=1;i<=n;i++)
        {
            long long k=1;
            for(int j=1;j<=i;j++)
            {
                k*=x;
               // cout<<k<<" ";
                x+=1;
                k%=mod;
              
             //   cout<<s<<" ";
            }
             s+=(k%mod);
             s%=mod;
            // cout<<s<<" ";
        }
        return s%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends