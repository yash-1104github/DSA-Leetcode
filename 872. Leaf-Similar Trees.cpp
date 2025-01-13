class Solution {
public:
      
      void inorder(TreeNode* root,vector<int>& s){
        
          if(root->left == nullptr && root->right== nullptr){
               s.push_back(root->val);
               return;
          }

          inorder(root->left,s);
          inorder(root->right,s);
      }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
         
         vector<int>s1;
         vector<int>s2; 
         
         inorder(root1,s1);
         inorder(root2,s2);

         return s1==s2;

    }
};
