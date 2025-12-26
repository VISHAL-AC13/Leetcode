char* reverseOnlyLetters(char* s) {
    int n=strlen(s);
    int left=0,right=n-1;
    while(left<right){
        if(isalpha(s[left])&&isalpha(s[right])){
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            right--;
            left++;
        }
        else if(!isalpha(s[left])){
            left++;
        }
        else if(!isalpha(s[right])){
            right--;
        }
    }
    return s;
}