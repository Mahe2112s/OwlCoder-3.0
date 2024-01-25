class Solution {
public:
    int longestPalindrome(string str) {
        map<char,int> mp;
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        int s=0,flag=0;
        for(auto it:mp)
        {
            //cout<<it.first<<" "<<it.second;
           if(it.second%2==0) s+=it.second;
           else
           {
               if(flag==0){
                   s+=it.second;
                   flag=1;
               } 
               else
               {
                   it.second-=1;
                   s+=it.second;
               }
           }
        }
        return s;
    }
};
