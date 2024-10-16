//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool sort_true(vector<int>arr)
  {
      for(int i=0;i<arr.size()-1;i++)
      {
          if(arr[i]>arr[i+1]) return false; 
      }
      return true;
  }
    bool checkSorted(vector<int> &arr) {
        // code here.
       // map<int,int>mp;
       if(sort_true(arr)) return true;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=(i+1))
            {
                swap(arr[i],arr[arr[i]-1]);
                c+=1;
            }
        }
        if(sort_true(arr) and c==2) return true;
        else return false;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends