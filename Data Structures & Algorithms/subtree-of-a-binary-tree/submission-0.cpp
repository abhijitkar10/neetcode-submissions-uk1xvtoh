/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int same(TreeNode* p, TreeNode* q){
        if(!p && !q) return 1;
        if(!p || !q) return 0;
        if(p->val!=q->val) return 0;

        return same(p->left,q->left) * same(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> que;
        queue<TreeNode*> queu;
        que.push(root);
        if(root->val==subRoot->val) queu.push(root);
        while(!que.empty()){
            TreeNode* tp=que.front();
            que.pop();
            if(tp->left!=NULL) que.push(tp->left); if(tp->left!=NULL && tp->left->val==subRoot->val) queu.push(tp->left);
            if(tp->right!=NULL) que.push(tp->right); if(tp->right!=NULL && tp->right->val==subRoot->val) queu.push(tp->right);
        }
        while(!queu.empty()){
            TreeNode* tpp=queu.front();
            queu.pop();
            if(same(tpp,subRoot)==1) return true;
        }
        return false;
        
    }
};
