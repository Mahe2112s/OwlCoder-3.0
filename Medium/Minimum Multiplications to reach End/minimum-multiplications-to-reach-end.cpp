//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        queue<pair<int,int>>q;
        q.push({start,1});
        int c=0,p=-1,temp=0;
         vector<int>v(100000, 0);
         if(start==end) return 0;
        while(!q.empty())
        {
            c=q.front().second;
            for(int i=0;i<arr.size();i++)
            {
                int temp=q.front().first*arr[i];
                temp%= 100000;
                if(v[temp]==0)
                {
                    q.push({temp,c+1});
                    v[temp]=1;
                }
                if(temp==end) return c;
                else continue;
               
            }
            c+=1;
            q.pop();
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends