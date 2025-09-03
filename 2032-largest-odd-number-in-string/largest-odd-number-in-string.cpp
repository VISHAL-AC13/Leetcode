class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        string odd;
        for(int i=n-1;i>=0;i--){
            int dig=num[i]-48;
            if(dig%2!=0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};