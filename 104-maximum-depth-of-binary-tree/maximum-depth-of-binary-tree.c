/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int leftdepth=maxDepth(root->left);
    int rightdepth=maxDepth(root->right);
    int max=(leftdepth>=rightdepth)?leftdepth:rightdepth;
    return 1+max;
}