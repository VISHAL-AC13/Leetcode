class Solution {
public:
    int maximum69Number (int num) {
        int max=num;
        string s=to_string(num);
        string copy=s;
        for(int i=0;i<s[i]!='\0';i++){
            if(s[i]=='6'){
                s[i]='9';
            }
            int n=stoi(s);
            if(n>max){
                max=n;
            }
            s=copy;
        }
        return max;
    }
};