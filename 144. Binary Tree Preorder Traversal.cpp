//temp pass as reference if the input is very large
void preOrder(Node* root,vector<int>& temp){
    if(root == NULL) return; 
    temp.push_back(root -> data);
    preOrder(root->left,temp);
    preOrder(root->right,temp);
}
vector <int> preorder(Node* root)
{
   vector<int>temp;
   preOrder(root , temp);
   return temp;
}

class Solution {
public:
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root !=nullptr){
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        }
        return ans;
    }
};
