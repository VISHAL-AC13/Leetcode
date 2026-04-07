/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int func(TreeNode root){
        if(root==null){
            return 0;
        }
         if(root.left==null&&root.right==null) return 1;
         if(root.left==null) return 1+func(root.right);
         if(root.right==null) return 1+func(root.left);
        int left=(int)(1e6);
        int right=(int)(1e6);

         left=1+func(root.left);
         right=1+func(root.right);
       
        return Math.min(left,right);
    }
    public int minDepth(TreeNode root) {
        return func(root);
    }
}