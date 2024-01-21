class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=-999;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                cnt+=1;
            }
            else if(nums[i]==0)
            {
                cnt=0;
            }
            if(max<cnt)
            {
                max=cnt;
            }
        }
        return max;
    }
};
