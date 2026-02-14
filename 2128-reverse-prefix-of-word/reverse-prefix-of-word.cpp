class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        int index=-1;
        while(word[i]!='\0'){
            if(ch==word[i]){
                index=i;
                break;
            }
            i++;
            
        }
        if(index==-1) return word;

        int j=0;
        while(j<i){
            char temp=word[j];
            word[j]=word[i];
            word[i]=temp;
            i--;
            j++;
        }
        return word;
    }
};