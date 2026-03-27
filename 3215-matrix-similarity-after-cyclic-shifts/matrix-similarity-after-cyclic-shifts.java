class Solution {
    public boolean areSimilar(int[][] mat, int k) {
        int n=mat.length;
        int m=mat[0].length;
        int[][] copy=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                copy[i][j]=mat[i][j];
            }
        }
        while(k>0){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    int first=mat[i][0];
                    for(int j=0;j<m-1;j++){
                        mat[i][j]=mat[i][j+1];
                    }
                    mat[i][m-1]=first;
                }
                else{
                    int last=mat[i][m-1];
                    for(int j=m-1;j>0;j--){
                        mat[i][j]=mat[i][j-1];
                    }
                    mat[i][0]=last;
                }
            }
            k--;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(copy[i][j]!=mat[i][j]) return false;
            }
        }
        return true;
    }
}