class Solution {
public:
    bool poss(vector<vector<char>>& board,int row,int col,char c){
        for(int i=0;i<9;i++){
            if(board[i][col]==c){
                return false;//traversing for the entire given or comsdiered all the rows of the given column 
            }
            if(board[row][i]==c){
                return false;//traversing for the entire given or considered column of the row
            }
            //we know the sudoku is divided into 3 pieces of row nd column each and + we know that i/n in 2d matrix gives row and i%n gives us the column 
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){
                return false;
            }
        }
        return true;
    }
    
    
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){//if it is empty and possible filling it up 
                    for(char c='1';c<='9';c++){
                        if(poss(board,i,j,c)){
                            board[i][j]=c;
                            
                            if(solve(board)) return true;
                             board[i][j]='.';//backtrackking that is the recurssive call fails to meet the condition at some point of tiime
                        }
                    }
                    return false;
                }
            }
        }//come out of the traversal and no empty spot in the board found then it is satisfied and already a solved sudoku
        return true;
    }
    
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

https://leetcode.com/problems/sudoku-solver/
