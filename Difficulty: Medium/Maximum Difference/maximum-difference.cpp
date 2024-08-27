//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    vector<int> res(vector<int> & arr,stack<int>st,vector<int>l)
    {
        st.push(arr[0]);
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>st.top())
            {
                l[i]=st.top();
                st.push(arr[i]);
            }
            else{
                while(!st.empty() and arr[i]<=st.top())
                {
                    st.pop();
                }
                if(!st.empty()) l[i]=st.top();
                else l[i]=0;
                st.push(arr[i]);
            }
        }
        return l;
    }
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        vector<int>l(arr.size(),0);
        vector<int>r(arr.size(),0);
        stack<int>st;
        l=res(arr,st,l);
        reverse(arr.begin(),arr.end());
        r=res(arr,st,r);
        // for(auto it:r) cout<<it<<" ";
        reverse(r.begin(),r.end());
        int mx=0;
        for(int i=0;i<r.size();i++)
        {
            mx=max(mx,abs(r[i]-l[i]));
        }
        return mx;
        
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

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends