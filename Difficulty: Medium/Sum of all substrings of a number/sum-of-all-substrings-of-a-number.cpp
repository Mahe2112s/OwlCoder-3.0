class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
        // vector<string>v;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                ans += stoi(s.substr(i,j+1-i));
               // v.push_back(s.substr(i,j-i+1));
            }
        }
        // for(auto it:v ){
        //     cout<<it<<endl;
        // }
        
        return ans;
    }
};