int smallestNumber(int n) {
    int count=0;
    while(n<=n+5){
        int i=n;
        while(i&1){
            i=i>>1;
        }
        i=i>>1;
        if(i==0){
            return n;
        }
        n++;
    }
    return 0;
}