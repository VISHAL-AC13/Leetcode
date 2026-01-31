char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int start=0,end=lettersSize-1;
    char c=letters[0];
    while(start<=end){
        int mid=(start+end)/2;
        if(letters[mid]<=target){
            start=mid+1;
        }
        else{
            end=mid-1;
            c=letters[mid];
        }
    }
    return c;
}