class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int i=2;
        int j=n-2;
        string result="";
        for(int k=i;k<=j;k++){
            result="";
            for(int g=0;g<k;g++){
                int rem=n%10;
                result=char(rem+'0')+result;
            }
            string rev=result;
            reverse(result.begin(),result.end());
            if(rev==result){
                return false;
            }
        }
        return true;

    }
};