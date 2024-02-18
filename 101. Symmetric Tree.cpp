/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool ans=true;
    void DFS(TreeNode *r1,TreeNode *r2)
    {
        if((r1==NULL and r2!=NULL) or (r1!=NULL and r2==NULL)) ans = false;
        if(r1==NULL or r2==NULL) return;
        if(r1->val!=r2->val) ans=false;
        DFS(r1->left,r2->right);
        DFS(r1->right,r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        DFS(root->left,root->right);
        return ans;
    }
};
