class Solution {
  public:
    int countWays(int n) {
        // your code here
        static vector<int>dp(1000001,-1);
        
        if(n<=1) return 1;
        
        if(dp[n]!=-1) return dp[n];
        
        
        
        dp[n] = countWays(n-1) + countWays(n-2);
        
        return dp[n];
    }
};
