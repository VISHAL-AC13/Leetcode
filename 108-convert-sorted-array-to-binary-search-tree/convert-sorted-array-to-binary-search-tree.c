/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode* create(int n){
    struct TreeNode* temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp->val=n;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
 }
 struct TreeNode* insert(int start,int end,int* nums ){
            if(start>end) return NULL;
            int mid=(start+end)/2;
             struct TreeNode* root=create(nums[mid]);
            root->left=insert(start,mid-1,nums);
            root->right=insert(mid+1,end,nums);
            return root;
 }
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
     struct TreeNode* root=NULL;
    if(nums==NULL){
        return NULL;
    }
    int mid=numsSize/2;
    root=insert(0,numsSize-1,nums);
    return root;
    

}