//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size()<=1) return {};
        vector<int>v(2,0);
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        int temp1 = INT_MAX;
        int close = arr[i]+arr[j];
        while(i<j){
            int close = arr[i]+arr[j];
            int diff = abs(target - close);
            if(diff<temp1){
                temp1 = diff;
                v[0]=arr[i];
                v[1]=arr[j];
            }
            if(close>=target) j--;
            else i++;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends