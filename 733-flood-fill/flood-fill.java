class pair{
    int first;
    int second;
    pair(int first,int second){
        this.first=first;
        this.second=second;
    }
}
class Solution {
    
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int n=image.length;
        int m=image[0].length;
        boolean[][] visited=new boolean[n][m];
        pair dir[] = {
            new pair(1,0),
            new pair(0,1),
            new pair(-1,0),
            new pair(0,-1)
        };
        Queue<pair> q=new LinkedList<>();
        q.add(new pair(sr,sc));
        visited[sr][sc]=true;
         int val=image[sr][sc];
        image[sr][sc]=color;
        while(!q.isEmpty()){
            pair temp=q.poll();
            int r=temp.first;
            int c=temp.second;
            for(int k=0;k<4;k++){
                int dx=r+dir[k].first;
                int dy=c+dir[k].second;
                if(dx<0||dy<0||dx>=n||dy>=m||visited[dx][dy]==true||image[dx][dy]!=val) continue;
                q.add(new pair(dx,dy));
                visited[dx][dy]=true;
                 image[dx][dy]=color;
            }
        }
        return image;
    }
}