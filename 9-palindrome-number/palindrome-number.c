bool isPalindrome(int x) {
    int copy=x;
    long int result=0;
    if(x<0){
        return false;
    }
    while(x>0){
        int rem=x%10;
        result=(result*10)+rem;
        x=x/10;
    }
    if(copy==result){
        return true;
    }
    else {
        return false;
    }
}