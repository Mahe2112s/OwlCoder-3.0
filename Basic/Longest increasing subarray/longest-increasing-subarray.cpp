//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long int lenOfLongIncSubArr(long int arr[], long int n) {
    // vector<int> v;
    int c=0,mx=0;
     for(int i=0;i<n-1;i++)
     {
         if(arr[i]<arr[i+1])
         {
            // cout<<"if"<<arr[i];
             c++;
         }
         
         else
         {
             //cout<<"else"<<arr[i];
             c=0;
         }
         
         mx=max(mx,c);
     }
     return mx+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        long int arr[n], i;
        for (i = 0; i < n; i++) 
            cin >> arr[i];
        Solution obj;
        cout << obj.lenOfLongIncSubArr(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends