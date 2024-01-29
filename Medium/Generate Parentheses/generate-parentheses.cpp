//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string>ve;
    void genParthensis(int open,int close,int n,string p)
    {
        //base case
        if(open==n and close==n)
        {
            ve.push_back(p);
            return;
        }
        if(open<n)
        {
            genParthensis(open+1,close,n,p+"(");
           // p.pop_back();
        }
        if(open>close)
        {
            genParthensis(open,close+1,n,p+")");
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        genParthensis(0,0,n,"");
        return ve;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends