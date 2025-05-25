class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it*it]++;
        }
        
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                if( mp.find( (arr[i]*arr[i]) + (arr[j]*arr[j]) ) != mp.end() ) return true;
            }
        }
        return false;
    }
};