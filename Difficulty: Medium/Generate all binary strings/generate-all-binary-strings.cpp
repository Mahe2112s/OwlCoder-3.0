//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void Binary(int Ind,string temp,vector<string>&res,int n)
    {
        if(Ind==n)
        {
            for(int i=0;i<temp.size()-1;i++)
            {
                if((temp[i]==temp[i+1]) and (temp[i]=='1')) return;
            }
            res.push_back(temp);
            return;
        }
        Binary(Ind+1,temp+"0",res,n);
        Binary(Ind+1,temp+"1",res,n);
    }
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string>res;
        Binary(0,"",res,num);
        return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends