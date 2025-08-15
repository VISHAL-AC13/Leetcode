bool isPowerOfFour(int n) {
    if(n==1){
        return true;
    }
    long int count=0;
    int c=n;
    if(n<=0){
        return false;
    }
    while((n!=1||n!=-1)&&n>0){
        if(n==1||n==-1){
            break;
        }
        count++;
        n=n/4;
    }
    if(pow(4,count)==c){
        return true;
    }
    return false;
}