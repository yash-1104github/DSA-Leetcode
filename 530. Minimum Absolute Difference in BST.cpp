
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& temp){
        if(root == nullptr) return ;
          inorder(root -> left,temp);
          temp.push_back(root->val);
          inorder(root -> right,temp);
    }    
    int getMinimumDifference(TreeNode* root) {
       vector<int>temp;
       inorder(root,temp);
        
       sort(temp.begin(),temp.end()); 
        int n = temp.size(),  mini = INT_MAX;
      
        for(int i = 0 ; i < n - 1 ; i++){
             mini = min(mini,temp[i+1] - temp[i]);
        }
        return mini;     
    }
};
