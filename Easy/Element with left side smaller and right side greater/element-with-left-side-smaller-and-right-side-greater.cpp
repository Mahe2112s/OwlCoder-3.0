//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    int left[n+1];
    int right[n+1];
    int mx=arr[0];
    int mn=arr[n-1];
    for(int i=0;i<n;i++)
    {
        left[i]=mx;
        if(mx<arr[i]) mx=arr[i];
    }
    for(int i=n-1;i>=0;i--){
        right[i]=mn;
        if(mn>arr[i]) mn=arr[i];
    }
    for(int k=1;k<n-1;k++)
    {
        if(left[k]<=arr[k] and arr[k]<=right[k]) return arr[k];
    }
    return -1;
}