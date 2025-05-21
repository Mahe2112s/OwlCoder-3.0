/* A binary tree node has data, pointer to left child
   and a pointer to right child
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        // code here
        queue<Node*> q;
        q.push(root);
        int l=0;
        vector<int>res;
        while(!q.empty()){
            int wt = q.size();
            vector<int>v;
            for(int i=0;i<wt;i++){
                Node* temp = q.front();
                v.push_back(temp->data);
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);

            }
            if(l%2==0){
                reverse(v.begin(),v.end());
            }
            for(auto it:v){
                res.push_back(it);
            }
            l+=1;
        }
        return res;
    }
};