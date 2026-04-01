class Solution {
public:

    
    int diam(TreeNode* root,int &maxdiam){
        if(root==NULL) return 0;
        int left=diam(root->left,maxdiam);
        int right=diam(root->right,maxdiam);
        maxdiam=max(maxdiam,left+right);
        return max(left,right)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxdiam=0;
        diam(root,maxdiam);
        return maxdiam;
    }
};