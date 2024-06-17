class Solution {
private:
    bool recursion(TreeNode* left,TreeNode* right){
      if(left == NULL || right== NULL)
          return left==right ;
        if(left->val!= right->val)
            return false;
        return (recursion(left->left,right->right) && recursion(left->right,right->left));
  
    }

public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return false;
         return  recursion(root->left,root->right);
     } 
};
   101. Symmetric Tree
