//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		   int n=1<<s.size();
		   vector<string>v;
            string temp="";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<s.size();j++)
                {
                    if( i & (1<<j))
                    {
                        temp+=s[j];
                    }
                }
                if(temp!="") v.push_back(temp);
                temp="";
            }
            sort(v.begin(),v.end());
            return v;
    	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends