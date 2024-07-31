class Solution {
public:
    int countNodes(TreeNode* root) {
        if ( root == nullptr){
            return 0;
        }
        
        int lh = countNodes(root->left);
        int rh = countNodes(root -> right);
        
        return 1+lh+rh; 
    }
};

class Solution {
public:
    int cnt = 0;  

    int countNodes(TreeNode* root) {
        if (root == nullptr) return cnt;
        cnt++;  
        countNodes(root->left);
        countNodes(root->right);
        return cnt;
    }
};
