//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        int s1=((x>>p1) & ((1<<n)-1));
        int s2=((x>>p2) & ((1<<n)-1));
        
        int s=s1^s2;
        
        int s3=s<<p1;
        int s4=s<<p2;
        
        int z=s3|s4;
        
        return z^x;
        
        
    }
};

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}
// } Driver Code Ends