//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        map<int,int>mp;
        int s=0,c=0;
        mp[0]=1;
        for(int i=0;i<N;i++)
        {
            s+=Arr[i];
            //cout<<s<<" ";
            if(mp.find(s-k)!=mp.end())
            {
                c+=mp[s-k];
                //cout<<s<<" ";
            }
            mp[s]++;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends