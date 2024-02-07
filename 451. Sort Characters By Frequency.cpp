class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        priority_queue<pair<int,char>>q;
        int f=0;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<string>res;
        for(auto it:mp)
        {
            q.push({it.second,it.first});
        }
        while(!q.empty())
        {
            auto it=q.top();
            for(int i=0;i<it.first;i++)
            {
                temp+=it.second;
            }
            //cout<<it.first<<" "<<it.second;
            q.pop();
        }
        return temp;
    }
};
