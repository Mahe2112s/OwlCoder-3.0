//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void Sums(int ind,int s,vector<int>arr,int n,vector<int>&hold)
  {
      if(ind==n)
      {
          hold.push_back(s);
          return;
      }
      s+=arr[ind];
      Sums(ind+1,s,arr,n,hold);
      s-=arr[ind];
      Sums(ind+1,s,arr,n,hold);
  }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int>v;
        Sums(0,0,arr,n,v);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends