class Solution {
public:
    bool isSafe(int row,int col,vector<vector<char>>& board,int digit){
        for(int i=0;i<9;i++){
            if(board[row][i]==digit){
                return false;
            }
            if(board[i][col]==digit){
                return false;
            }
            int newRow=3*(row/3);
            int newCol=3*(col/3);
            if(board[newRow+i/3][newCol+i%3]==digit){
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
         for(int row = 0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]=='.'){
                    for(char i='1';i<='9';i++){
                         if(isSafe(row,col,board,i)){
                            board[row][col]=i;
                            if(solve(board)){
                                return true;
                            }
                            board[row][col]='.';
                        }
                    }
                    return false;
                }

            }
        }
        return true;
    } 
    void solveSudoku(vector<vector<char>>& board) {
       solve(board);
    }
};