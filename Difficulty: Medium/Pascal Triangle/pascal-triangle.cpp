//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  int nCr(int n,int r){
      int res = 1;
      for(int i=0;i<r;i++){
          res = res*(n-i);
          res = res/(i+1);
      }
      return res;
  }
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int>v;
        for(int i=0;i<n;i++){
            int r = nCr(n-1,i);
            v.push_back(r);
        }
        return v;
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends