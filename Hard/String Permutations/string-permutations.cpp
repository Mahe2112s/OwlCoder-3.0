//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    priority_queue<string> v;
    void genPermutations(string s,vector<int> &fr,string ans)
    {
        //base case
        if(ans.size()==s.size())
        {
            v.push(ans);
            return ;
        }
        for(int i=0;i<s.size();i++)
        {
            if(fr[i]==0)
            {
                fr[i]=1;
                genPermutations(s,fr,ans+s[i]);
                fr[i]=0;
            }
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        int n=S.size();
        string temp="";
        vector<int> fr(n,0);
        genPermutations(S,fr,temp);
        vector<string>res;
        while(!v.empty())
        {
            res.push_back(v.top());
            v.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends