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
        int l=0;
        while(n>1){
            l++;
            int last=arr[n-1];
            for(int i=n-1;i>=1;i--)
            {
               arr[i]=arr[i-1];
            }
            arr[0]=last;
            if(l<=arr.size())arr.erase(arr.begin()+(n-l));
            else arr.erase(arr.begin()+0);
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