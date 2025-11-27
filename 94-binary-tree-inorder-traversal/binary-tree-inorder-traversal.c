/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void traverse(struct TreeNode* root,int *arr,int* i){
    if(root==NULL){
        return;
    }
    traverse(root->left,arr,i);
    int j=*i;
    arr[j]=root->val; 
    (*i)++;
    traverse(root->right,arr,i);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    
    int *result=(int *)malloc(sizeof(int )*101);
    int index=0;
    traverse(root,result,&index);
    *returnSize=index;
    return result;
}