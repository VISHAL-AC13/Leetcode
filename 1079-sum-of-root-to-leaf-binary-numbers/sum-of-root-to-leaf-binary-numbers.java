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
    int sum=0;
    void preorder(TreeNode root,String bstring){
        if(root==null){
            return;
        }
        String c=(root.val)+"";
        bstring+=c;
        if(root.left==null&&root.right==null){
            int n=0;
            if(!bstring.equals(""))  n=Integer.parseInt(bstring,2);
            sum+=n;

        }
        preorder(root.left,bstring);
        preorder(root.right,bstring);
        
    }
    public int sumRootToLeaf(TreeNode root) {
        preorder(root,"");
        return sum;
    }
}