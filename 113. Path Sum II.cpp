class Solution {
public:
    vector<vector<int>>v;
    void DFS(TreeNode * root,int t,int s,vector<int>temp)
    {
        if(root==NULL) return;
        s+=root->val;
        temp.push_back(root->val);
        if(s==t and root->left==NULL and root->right==NULL)
        {
            v.push_back(temp);
            return;
        }
        DFS(root->left,t,s,temp);
        DFS(root->right,t,s,temp);
       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        DFS(root,targetSum,0,temp);
        return v;
    }
};
