//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int s=0,temp=n;
        while(temp>0)
        {
            int r=temp%10;
            s+=pow(r,3);
            temp/=10;
        }
        //cout<<temp;
        // if(s==n) return "Yes";
        // else return "No";
        return s==n ? "Yes" : "No";
        
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends