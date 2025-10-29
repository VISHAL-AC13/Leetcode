bool isAnagram(char* s, char* t) {
    int freq[256]={0};
    if(strlen(s)!=strlen(t)){
        return false;
    }
    for(int i=0;s[i]!='\0';i++){
        freq[(unsigned char)s[i]]++;
        freq[(unsigned char)t[i]]--;
         
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}