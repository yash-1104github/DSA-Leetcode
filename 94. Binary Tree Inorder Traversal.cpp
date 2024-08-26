class Solution {
  public:
        vector<int>temp;
        void inorder(Node* root){
        if(root == NULL) return ;
        inorder(root->left);
        temp.push_back(root->data);
        inorder(root->right);
        }    
        vector<int>inOrder(Node* root) {
          inorder(root);
          return temp;
    }
};

class Solution {
public:
    vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root!=nullptr){
          inorderTraversal(root->left);
            ans.push_back(root->val);
          inorderTraversal(root->right);
        }
        return ans;
    }
};
