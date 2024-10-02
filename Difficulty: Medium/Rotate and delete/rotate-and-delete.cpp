//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        if(n==1) return arr[0];
        int l=1;
        while(n>1){
            int last=arr[n-1];
            arr.pop_back();
            arr.insert(arr.begin(),last);
            if(n-l<0) arr.erase(arr.begin()+0);
            else arr.erase(arr.begin()+(n-l));
            l+=1;
            n--;
        }
        return arr[0];
        
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
        Solution obj;
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends