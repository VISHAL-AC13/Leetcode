class pair{
    int first;
    int second;
    pair(int first,int second){
        this.first=first;
        this.second=second;
    }
}
class Solution {
    public List<Integer> zigzagTraversal(int[][] grid) {
        List<Integer> ans=new ArrayList<>();
        int n=grid.length;
        int m=grid[0].length;
        boolean[][] visited=new boolean[n][m];
        pair[] dir={
            new pair(1,0),
            new pair(0,1),
            new pair(-1,0),
            new pair(0,-1),
        };
        boolean flag=true;
        for(int i=0;i<n;i++){
            if(flag)
           { for(int j=0;j<m;j++){
                if(visited[i][j]==false){
                    ans.add(grid[i][j]);
                    int r=i;
                    int c=j;
                    visited[i][j]=true;
                    for(int k=0;k<4;k++){
                        int dx=r+dir[k].first;
                        int dy=c+dir[k].second;
                        if(dx>=n||dy>=m||dx<0||dy<0||visited[dx][dy]==true) continue;
                        visited[dx][dy]=true;
                    }
                }
            }}
            else{
                for(int j=m-1;j>=0;j--){
                if(visited[i][j]==false){
                    ans.add(grid[i][j]);
                    int r=i;
                    int c=j;
                    visited[i][j]=true;
                    for(int k=0;k<4;k++){
                        int dx=r+dir[k].first;
                        int dy=c+dir[k].second;
                        if(dx>=n||dy>=m||dx<0||dy<0||visited[dx][dy]==true) continue;
                        visited[dx][dy]=true;
                    }
                }
            }
            }
            flag=!flag;
        }
        return ans;

    }
}