class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                s[i]=tolower(s[i]);
                str.push_back(s[i]);
            }
        }
        int n=str.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            i=i+1;
            j=j-1;
        }
        return true;
    
    }
};