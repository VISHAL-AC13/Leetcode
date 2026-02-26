class pair{
    int first;
    int second;
    pair(int first,int second){
        this.first=first;
        this.second=second;
    }
}
class Solution {
    public int orangesRotting(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        boolean[][] visited=new boolean[n][m];
        Queue<pair> q=new LinkedList<>();
        int freshorange=0;
        pair[] dir={
            new pair(1,0),
            new pair(-1,0),
            new pair(0,-1),
            new pair(0,1),
        };
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){

                    visited[i][j]=true;
                    q.add(new pair(i,j));
                }
                else if(grid[i][j]==1){
                    freshorange++;
                }

            }
        }
        if(freshorange==0) return 0;
        int count=-1;
        while(!q.isEmpty()){
            int t=q.size();
            int j=0;
            count++;
            while(j<t){
                pair temp=q.poll();
                int r=temp.first;
                int c=temp.second;
                for(int k=0;k<4;k++){
                    int dx=r+dir[k].first;
                    int dy=c+dir[k].second;
                    if(dx<0||dy<0||dx>=n||dy>=m||visited[dx][dy]==true||grid[dx][dy]==0) continue;
                    visited[dx][dy]=true;
                    q.add(new pair(dx,dy));
                    freshorange--;
                }
                j++;
            }
        }
        if(freshorange!=0) return -1;
        return count;
    }
}