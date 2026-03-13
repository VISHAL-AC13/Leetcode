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
  
    int traverse(TreeNode root,int target,long sum){
          int c=0;
        if(root==null) {
            
             return 0;
        }
        
        sum+=root.val;
       
        if(sum==target){
             c++;
        }
         c+=traverse(root.left,target,sum);
         c+=traverse(root.right,target,sum);
        return c;
    }
    public int pathSum(TreeNode root, int targetSum) {
        int ans=0;
        
        if(root==null){
            return 0;
        }
        ans+= traverse(root,targetSum,0);
        ans+=pathSum(root.left,targetSum);
        ans+=pathSum(root.right,targetSum);
        return ans;
    }
}