class Solution {
public:
bool func(string& s,string& p,int i,int j){
    if(j<0) return true;
    if(i<0&&j>=0){
        while(j>=0&&p[j]=='*') j--;
        return j<0;
    }
    if(s[i]==p[j]){
        return func(s,p,i-1,j-1);
    }
    else if(p[j]=='*'){
        return func(s,p,i-1,j)||func(s,p,i,j-1);
    }
    else{
        return false;
    } 

}
    bool hasMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        for(int i=0;i<n;i++){
            if(func(s,p,i,m-1)) return true;
        }
        return false;
    }
};