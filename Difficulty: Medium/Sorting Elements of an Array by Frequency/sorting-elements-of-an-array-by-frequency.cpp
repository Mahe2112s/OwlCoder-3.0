//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
            //if(find(v.begin(),v.end(),arr[i])==v.end()) v.push_back(arr[i]);
        }
        // cout<<mp.size();
        map<int,vector<int>>res;
     //   vector<pair<int,int>>rs;
        for(auto it:mp)
        {
       //     rs.push_back(make_pair(it.second,it.first));
            res[it.second].push_back(it.first);
        }
         vector<int>l;
        for(auto it:res)
        {
          sort(it.second.begin(),it.second.end(),greater<int>());
        //   cout<<it.first<<" ";
        //   for(auto i:it.second) cout<<i<<" ";
        //   cout<<endl;
            for(auto i:it.second) {
                l.insert(l.end(),it.first,i);
            }
        }
        reverse(l.begin(),l.end());
        return l;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends