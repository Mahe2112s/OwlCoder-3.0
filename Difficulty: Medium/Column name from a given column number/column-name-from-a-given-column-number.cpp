//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string temp = "";
        while(n){
            n--;
            temp+=('A'+(n%26));
            n/=26;
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	
cout << "~" << "\n";
}
}

// } Driver Code Ends