//preorder Traversal Root->left->right => left view
// reverse preorder Traversal Root->right->left => right view

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        recursion(root,0,res);
        return res;
    }
 private:
    void recursion(TreeNode* root, int lvl, vector<int>&res){
     if(root==NULL)
          return ;
       if(res.size()==lvl)
           res.push_back(root->val);
     recursion(root->right,lvl+1,res);
     recursion(root->left,lvl+1,res);
    }
};
