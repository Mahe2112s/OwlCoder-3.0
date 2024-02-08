class Solution {
public:
    int ans=0;
   void DFS(TreeNode * root,int sum,int s)
   {
       if(root==NULL) return;
       s+=root->val;
       if(s==sum and root->left==NULL and root->right==NULL) ans=1;      
       DFS(root->left,sum,s);
       DFS(root->right,sum,s);
   }
    bool hasPathSum(TreeNode* root, int targetSum) {
        DFS(root,targetSum,0);
        if(ans==1) return true;
        else return false;
    }
};
