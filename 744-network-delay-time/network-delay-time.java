class pair{
    int first;
    int second;
    pair(int first,int second){
        this.first=first;
        this.second=second;
    }
}
class Solution {
    public int networkDelayTime(int[][] times, int n, int k) {
        int[] dist=new int[n+1];
        Arrays.fill(dist,(int) 1e6);
        dist[k]=0;
        ArrayList<ArrayList<pair>> adj=new ArrayList<>();
        for(int i=0;i<n+1;i++){
            adj.add(new ArrayList<>());
        }
        for(int i=0;i<times.length;i++){
            int u=times[i][0];
            int v=times[i][1];
            int w=times[i][2];
            adj.get(u).add(new pair(v,w));
         
        }
        PriorityQueue<pair> pq=new PriorityQueue<>((a,b)->a.second-b.second);
        pq.add(new pair(k,0));
        while(!pq.isEmpty()){
            pair temp=pq.poll();
            int currnode=temp.first;
            int currdist=temp.second;
            if(dist[currnode]<currdist) continue;
            for(pair it:adj.get(currnode)){
                int v=it.first;
                int wt=it.second;
                if(currdist+wt<dist[v]){
                    dist[v]=currdist+wt;
                    pq.add(new pair(v,dist[v]));
                }
            }
        }
        int max=-1;
        for(int i=1;i<=n;i++){
            if(dist[i]>max){
                max=dist[i];
            }
        }
        if(max==(int)1e6) return -1;
        return max;
    }
}