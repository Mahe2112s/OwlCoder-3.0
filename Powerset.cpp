class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int si=1<<nums.size();
        vector<vector<int>> v;
        vector<int> pw;
        for(int i=0;i<si;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i & (1<<j))
                {
                    pw.push_back(nums[j]);
                }
            }
            v.push_back(pw);
            pw.clear();
        }
        return v;
    }
    
};
