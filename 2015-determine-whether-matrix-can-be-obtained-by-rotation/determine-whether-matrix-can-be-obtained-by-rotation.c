void rotate(int **mat,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        int left=0,right=n-1;
        while(left<right){
            int temp=mat[i][left];
            mat[i][left]=mat[i][right];
            mat[i][right]=temp;
            left++;
            right--;
        }
    }
    
}
bool check(int** mat,int n,int** target,int t){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=target[i][j]){
                return false;
            }
        }
    }
    return true;
}
bool findRotation(int** mat, int matSize, int* matColSize, int** target, int targetSize, int* targetColSize) {
    if(check(mat,matSize,target,targetSize)){
        return true;
    }
    for(int i=0;i<=matSize;i++){
        rotate(mat,matSize);
        if(check(mat,matSize,target,targetSize)){
            return true;
        }
    }
    return false;

}