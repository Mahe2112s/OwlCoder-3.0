class Solution {
public:
    vector<vector<int>> v;
    void generatePermutations(vector<int> &arr,vector<int> &frq,vector<int> &temp)
    {
        //base case
        if(temp.size()==arr.size())
        {
            v.push_back(temp);
            return;
        }

        //recursive call
        for(int i=0;i<arr.size();i++)
        {
            if(frq[i]==0)
            {
                frq[i]=1;
                temp.push_back(arr[i]);
                generatePermutations(arr,frq,temp);
                temp.pop_back();
                frq[i]=0;
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> per(nums.size(),0);
        vector<int> l;
        generatePermutations(nums,per,l);
        return v;

    }
};
