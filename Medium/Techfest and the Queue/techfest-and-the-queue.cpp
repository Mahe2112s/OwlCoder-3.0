//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    unordered_map<int,int> mp;
	    int s=0;
	    for(int i=a;i<=b;i++)
	    {
	        int p=2;
	        int temp=i;
	        for(int p=2;p*p<=temp;p++)
	        {
	            while(temp%p==0)
	            {
	                mp[p]++;
	                temp/=p;
	            }
	        }
	       if(temp>1) 
	       {
	           mp[temp]++;
	       }
	       for(auto it:mp)
	       {
	           s+=it.second;
	       }
	       mp.clear();
	    }
	    return s;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends