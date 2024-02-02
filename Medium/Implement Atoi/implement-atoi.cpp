//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        string z="abcdefghijklmnopqrstwuvxyz-";
        for(int i=1;i<s.size();i++)
        {
            auto it=find(z.begin(),z.end(),s[i]);
            if(it!=z.end()) return -1;
        }
        int a=stoi(s);
        return a;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends