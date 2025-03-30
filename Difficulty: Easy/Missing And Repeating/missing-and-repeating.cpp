//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int>res;
        vector<int>freq(arr.size()+1,0);
        for(int i=0;i<arr.size();i++){
            if(freq[arr[i]]==0){ 
                freq[arr[i]]++;
            }
            else{
                res.push_back(arr[i]);
            }
        }
       // cout<<freq.size();
        for(int i=1;i<freq.size();i++){
            if(freq[i]==0) res.push_back(i);
        }
        return res.size()==0 ? vector<int>{0,0} : res;
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
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends