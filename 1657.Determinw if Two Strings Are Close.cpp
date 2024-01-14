class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;

        map<char,int> mp1;
        map<char,int> mp2;

        for(int i=0;i<word1.size();i++)
        {
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        vector<int> a;
        vector<int> b;
        for(auto it:mp1)
        {
            if(mp2.find(it.first)==mp2.end()) return false;
            //else a.push_back(it.second);
        }
       // int i=0;
        for(auto it:mp2)
        {
            b.push_back(it.second);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;
        
    }
};
