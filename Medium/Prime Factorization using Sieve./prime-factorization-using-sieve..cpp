//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void sieve(){}
    vector<int> findPrimeFactors(int N) {
        vector<int> Factor(N+1);
        for(int i=0;i<=N;i++) Factor[i]=i;
        
        for(int i=2;i<=N;i++)
        {
            if(Factor[i]==i)
            {
                for(int j=2*i;j<=N;j+=i)
                {
                    Factor[j]=i;
                }
            }
        }
       // return Factor;
       vector<int> v;
       while(N!=1)
       {
           v.push_back(Factor[N]);
           
           if(Factor[N]!=0)  N/=Factor[N];
           
           else break;
       }
       reverse(v.begin(),v.end());
       return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n;
        cin >> n;

        Solution obj;
        obj.sieve();
        vector<int> vec = obj.findPrimeFactors(n);
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends