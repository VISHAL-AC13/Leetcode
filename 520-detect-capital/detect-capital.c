bool detectCapitalUse(char* word) {
    int count=0;
    int caps=0;
   for(int i=0;word[i]!='\0';i++){
    if(isupper(word[i])){
        caps++;
    }
    count++;
   }
   if((count==caps)||(caps==0)||((caps==1&&(isupper(word[0]))))){
        return true;
   }
   return false;
}