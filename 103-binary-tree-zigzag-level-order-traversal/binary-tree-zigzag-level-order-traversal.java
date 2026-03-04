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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans=new ArrayList<>();
        Queue<TreeNode> q=new LinkedList<>();
        if(root==null){
            return new ArrayList<>();
        }
        q.add(root);
        boolean flag=true;
        while(!q.isEmpty()){
            int t=q.size();
            List<Integer> temp=new ArrayList<>();
            int j=0;
            while(j<t){
                TreeNode node=q.poll();
                if(node!=null) temp.add(node.val);
                if(node.left!=null) q.add(node.left);
                if(node.right!=null) q.add(node.right);
                j++;
            }
            if(!flag) Collections.reverse(temp);
            ans.add(temp);
            flag=!flag;
        }
        return ans;
    }
}