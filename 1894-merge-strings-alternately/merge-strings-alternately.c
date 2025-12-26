char * mergeAlternately(char * word1, char * word2){
    int n1=strlen(word1);
    int n2=strlen(word2);
    char* result=(char *)malloc(n1+n2+1);
    int i=0,j=0;
    while(word1[j]!='\0'&&word2[j]!='\0'){
        result[i]=word1[j];
        result[i+1]=word2[j];
        i+=2;
        j++;
    }
    while(j<n1){
        result[i]=word1[j];
        i++;
        j++;
    }
    while(j<n2){
        result[i]=word2[j];
        i++;
        j++;
    }
    result[i]='\0';
    return result;

}