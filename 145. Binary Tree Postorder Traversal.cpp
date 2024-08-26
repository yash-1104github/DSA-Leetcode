void postorder(Node* root , vector<int>& temp){
    if(root == nullptr) return ;
    postorder(root->left,temp);
    postorder(root->right,temp);
    temp.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>temp;
  postorder(root,temp);
  return temp;
}

class Solution {
public:
    vector<int>ans;
    vector<int> postorderTraversal(TreeNode* root) {
       if(root!=nullptr){
           postorderTraversal(root->left);
           postorderTraversal(root->right);
           ans.push_back(root->val);

       }
        return ans;
    }
};a
