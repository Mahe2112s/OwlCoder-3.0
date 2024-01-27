//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    priority_queue<string> str;
	    vector<string> res;
	    void permutation(string s,vector<int> &v,string ans)
	    {
	        if(ans.size()==s.size())
	        {
	            auto it=find(res.begin(),res.end(),ans);
	            if(it==res.end())
	            {
	                str.push(ans);
	                res.push_back(ans);
	            }
	            return;
	        }
	        for(int i=0;i<s.size();i++)
	        {
	            if(v[i]==0)
	            {
	                v[i]=1;
	                permutation(s,v,ans+s[i]);
	                v[i]=0;
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<int> visited(S.size(),0);
		    permutation(S,visited,"");
		    vector<string> ve;
		    while(!str.empty())
		    {
		        ve.push_back(str.top());
		        str.pop();
		    }
		    return ve;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends