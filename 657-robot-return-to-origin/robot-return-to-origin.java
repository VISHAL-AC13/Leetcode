class Pair{
    int first;
    int second;
    Pair(int first,int second){
        this.first=first;
        this.second=second;
    }
}
class Solution {
    public boolean judgeCircle(String moves) {
        Pair p=new Pair(0,0);
        for(int i=0;i<moves.length();i++){
            char c=moves.charAt(i);
            if(c=='U'){
                p.first++;
            }
            if(c=='D'){
                p.first--;
            }
            if(c=='R'){
                p.second++;
            }
            if(c=='L'){
                p.second--;
            }
        }
        if(p.first==0&&p.second==0){
            return true;
        }
        else {
            return false;
        }
    }
}