//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mp;
        int s=0,mx=0;
        mp[0]=1;
        for(int i=0;i<arr.size();i++)
        {
            s+=arr[i];
            if(s==k) mx= i+1;
            else if(mp.find(s-k)!=mp.end()){
                mx=max(mx,i-mp[s-k]);
            }
            if(mp.find(s)==mp.end()) mp[s]=i;
        }
        return mx;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends