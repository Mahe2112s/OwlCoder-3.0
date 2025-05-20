class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void inorder(Node* root,long &prev,bool &validate){
        if(root == NULL) return;
        
        inorder(root->left,prev,validate);
        
        if(prev >= root->data){
            validate = false;
            return;
        }
        
        prev = root->data;
        
        inorder(root->right,prev,validate);
    }
    bool isBST(Node* root) {
        // Your code here
        
        bool val = true;
        
        long prev = LONG_MIN;
        
        inorder(root,prev,val);
        
        return val;
        
    }
};
