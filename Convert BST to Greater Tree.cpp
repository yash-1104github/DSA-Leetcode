class Solution {
    private:
    void recursion(TreeNode* Node, int &sum){
        if(Node == nullptr) return ;
        recursion(Node->right,sum);
        sum += Node->val;
        Node->val = sum;
        recursion(Node->left,sum);
        return ;
        
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        int sum =0;
        recursion(root,sum);
        return root;
    }
};
