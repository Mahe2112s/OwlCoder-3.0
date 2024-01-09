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
   
    void DFS(TreeNode* r,vector<int>& v)
    {
       
        if(r==NULL) return;

        if(r->left==NULL and r->right==NULL) v.push_back(r->val);

        DFS(r->left,v);
        DFS(r->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        DFS(root1,v1);
        DFS(root2,v2);
        return v1==v2;
    }
};
