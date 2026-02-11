class Solution {
public:
bool func(int r,int c,vector<vector<char>>& board){
    for(int i=0;i<9;i++){
        if(c!=i&&board[r][i]==board[r][c]) return false;
    }
    for(int i=0;i<9;i++){
        if(r!=i&&board[i][c]==board[r][c]) return false;
    }
    int nr=(r/3)*3;
    int nc=(c/3)*3;
    for(int i=nr;i<nr+3;i++){
        for(int j=nc;j<nc+3;j++){
            if((i!=r||j!=c)&&(board[i][j]==board[r][c])) return false;
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='.') continue;
                if(func(i,j,board)==false) return false;
            }
        }
        return true;
    }
};