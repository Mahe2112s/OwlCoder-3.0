//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
   // priority_queue<vector<int>>q;
    vector<vector<int>>v;
    void Subsets(vector<int> &A,int idx,vector<int>temp)
    {
        if(idx>A.size()-1)
        {
            v.push_back(temp);
            return;
        }
        temp.push_back(A[idx]);
        Subsets(A,idx+1,temp);
        temp.pop_back();
        Subsets(A,idx+1,temp);
        
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<int>t;
        Subsets(A,0,t);
        // while(!q.empty())
        // {
        //     v.push_back(q.top());
        //     q.pop();
        // }
         sort(v.begin(),v.end());
        return v;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends