//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long c=0;
  long long int dp[1001][1001];
  long long int CoinChange(int coins[],int i,int s,int n)
  {
      if(i==n or s<0) return 0;
      if(dp[i][s]!=-1) return dp[i][s];
      if(s==0)
      {
          return 1;
      }
      dp[i][s]=CoinChange(coins,i,s-coins[i],n)+CoinChange(coins,i+1,s,n);
      return dp[i][s];
      
  }
    long long int count(int coins[], int N, int sum) {

        // code here.
        memset(dp,-1,sizeof(dp));
        
        return CoinChange(coins,0,sum,N); 
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends