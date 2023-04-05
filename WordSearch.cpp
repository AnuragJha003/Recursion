class Solution {
public:

    bool dfs(int i,int j,int index,string s,vector<vector<char>> &board)
    {
        if(index==s.length()){
            return true;
        }//if size of string obtained 
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || s[index]!=board[i][j]){
            return false;
        }//if out of bound or string char unmatched then 

        char x = board[i][j];//taking x into consideratoon 
        board[i][j] = '.';//mark that char in the board 2d as visited 

        bool subProb = dfs(i-1,j,index+1,s,board) or dfs(i+1,j,index+1,s,board) 
            or dfs(i,j-1,index+1,s,board) or dfs(i,j+1,index+1,s,board);
        //checking for horizontal left and right and vertical left and right 
        
        board[i][j] = x;//if kuch return nhi hua means it was a wrong choice so u need to backtrack 
        return subProb;
    }
    bool exist(vector<vector<char>>& board, string s) {
        int n = board.size();
        int m = board[0].size();
//checkiing for all possible matches of character 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==s[0])//if first character match hua then a possible answer
                {
                    if(dfs(i,j,0,s,board)){//calling recurssion on the ith jth index of the string and 0 is the index pointing to string formed and string s and board call ho rha 
                        return true;
                    }
                }
            }
        }
//after checking all possible if never returned then return false
        return false;
    }
};
https://leetcode.com/problems/word-search/
