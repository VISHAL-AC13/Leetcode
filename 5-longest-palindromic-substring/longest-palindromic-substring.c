int expandfromcenter(char* s,int left,int right,int n){
    while(left>=0&&right<n&&s[left]==s[right]){
        left--;
        right++;
    }
    return right-left-1;
} 
char* longestPalindrome(char* s) {
    int n=strlen(s);
    int start=0,end=0;
    int len;
    for(int i=0;i<n;i++){ 
        int len1=expandfromcenter(s,i,i,n);
        int len2=expandfromcenter(s,i,i+1,n);
         len=(len1>len2)?len1:len2;

        if(len>(end-start+1)){
            start=i-(len-1)/2;
            end=i+(len)/2;
        }
    }
    int j=0;
    char *result=(char *)malloc(sizeof(char)*(end-start+2));
    for(int i=start;i<=end;i++){
        result[j++]=s[i];
    }
    result[j]='\0';
    return result;
}