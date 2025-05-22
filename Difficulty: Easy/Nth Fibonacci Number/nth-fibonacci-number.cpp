// User function Template for C++
class Solution {
  public:
    
    int nthFibonacci(int n) {
        // code here
        static vector<int>dp(100,-1);
        if(n==0) return 0;
        if(n<=2) return 1;
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        dp[n] = nthFibonacci(n-1) + nthFibonacci(n-2);
        return dp[n];
    }
};