class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        unordered_map<int,int>freq;
        for(auto it:mp){
            freq[it.second]++;
        }
        if(freq.size()==1) return true;
        if(freq.size()==2){
            auto it1 = freq.begin();
            int f1 = it1->first,c1 = it1->second;
            ++it1;
            int f2 = it1->first,c2 = it1->second;
            if((f1==1 and c1==1) or (f2==1 and c2==1)) return true;
            if(abs(f1-f2)==1) {
                if ((f1 > f2 && c1 == 1) || (f2 > f1 && c2 == 1)) return true;
            }
        }
        return false;
    }
};