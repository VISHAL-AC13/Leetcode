class Solution {
    ArrayList<ArrayList<Integer>> lst=new ArrayList<>();
    void dfs(ArrayList<ArrayList<Integer>> adj,int node,boolean[] visited){
        visited[node]=true;
        for(int it:adj.get(node)){
           if(visited[it]==false)
            dfs(adj,it,visited);
        }
    }
    public int findCircleNum(int[][] arr) {
        ArrayList<ArrayList<Integer>> adj=new ArrayList<>();
        int n=arr.length;
        boolean[] visited=new boolean[n];
        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1&&i!=j){
            adj.get(i).add(j);
            adj.get(j).add(i);
            }
        }
       }
       int count=0;
       for(int i=0;i<n;i++){
            if(visited[i]==false){
                count++;
                dfs(adj,i,visited);
            }
       }
       return count;
    }
}