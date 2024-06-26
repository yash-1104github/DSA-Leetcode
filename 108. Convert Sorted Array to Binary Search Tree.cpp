class Solution {
private: 
    TreeNode* BST(vector<int>& nums,int l ,int r){
    if(l > r) return nullptr;
    int mid = (l+r)/2;
    TreeNode* node = new TreeNode(nums[mid]);
    node->left = BST(nums,l,mid-1);
    node->right = BST(nums,mid+1,r);
    return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
     TreeNode* newRoot = BST(nums,0,nums.size()-1);
        return newRoot;
    }
};
