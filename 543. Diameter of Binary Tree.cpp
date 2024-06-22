
class Solution {
private:
    int height(TreeNode* root,int &diameter){
        if(root == nullptr)
           return 0;
        int lh = height(root->left,diameter);
        int rh = height(root->right,diameter);
        
        //curve point 
        diameter = max(diameter,(lh+rh));
        //return  point only one-way
        return (1+max(lh,rh));
        
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0;
        height (root,diameter);
        return diameter;
    }
};
