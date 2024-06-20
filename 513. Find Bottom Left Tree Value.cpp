//BFS solution rightTOleft
class Solution {
public:
   int findBottomLeftValue(TreeNode* root) {
      queue<TreeNode*>q;
       TreeNode* current = root;
       q.push(current);
       
       while(!q.empty()){
           current = q.front();
           q.pop();
           if(current->right!=nullptr){
               q.push(current->right);
           }
            if(current->left!=nullptr){
               q.push(current->left);
           }
       }
       return current->val;
    }
};
