//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        priority_queue<int>q;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            q.push(it.second);
        }
        while(k!=0)
        {
            int t=q.top();
            q.pop();
            t-=1;
            q.push(t);
            k-=1;
        }
        int res=0;
        while(!q.empty())
        {
            int p=q.top();
            q.pop();
            res+=(p*p);
        }
        return res;
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends