class Solution {
public:
    int dp[101][101];
    int Unique(int i,int j,int m,int n)
    {
        if(j>=n or i>=m or i<0 or j<0) return 0 ;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==m-1 and j==n-1){
            return 1;
        }
        int right=Unique(i,j+1,m,n);
        int down=Unique(i+1,j,m,n);

        return dp[i][j]=right+down;
        
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        int res= Unique(0,0,m,n);
        return res;
    }
};
