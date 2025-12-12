/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
    int sum=0;
    if(root==NULL){
        return false;
    }
    targetSum-=root->val;
    if(root->right==NULL&&root->left==NULL){
        return (targetSum==0);
    }
    return hasPathSum(root->left,targetSum)||hasPathSum(root->right,targetSum);
}