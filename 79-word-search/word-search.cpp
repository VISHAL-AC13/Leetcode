class Solution {
public:
    bool check(vector<vector<char>>& board,string& word,int index,int r,int c,vector<vector<bool>>& visited){
        int n=board.size(),m=board[0].size();
        if(index==word.size()) return true;
        if(r<0||c<0||r>n-1||c>m-1||visited[r][c]||board[r][c]!=word[index]) return false;
        visited[r][c]=true;
        if(check(board,word,index+1,r+1,c,visited)) return true;
        if(check(board,word,index+1,r-1,c,visited)) return true;
        if(check(board,word,index+1,r,c-1,visited)) return true;
        if(check(board,word,index+1,r,c+1,visited)) return true;
        visited[r][c]=false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(check(board,word,0,i,j,visited)) return true;;
        }
       }
       return false;
    }
};