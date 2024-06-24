//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        if(n+n<q) return 0;
        if(n>q) return q-1;
        long long mx,mn,first_Index,second_Index,res;
        mx=max(q,n);
        mn=min(q,n);
        first_Index=mx%mn;
        if(first_Index==0) first_Index=1;
        second_Index = q - first_Index;
        return (second_Index-first_Index)+1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends