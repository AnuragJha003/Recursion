
class Solution{
    public:
    void f(int i,int j,vector<vector<int>>&m,int n,string move,vector<string>&ans,vector<vector<int>>&v){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
        //down 
        if(i+1<n && !v[i+1][j] && m[i+1][j]==1){
            v[i][j]=1;
            f(i+1,j,m,n,move+'D',ans,v);
            v[i][j]=0;
        }
        //left
        if(j-1>=0 && !v[i][j-1] && m[i][j-1]==1){
            v[i][j]=1;
            f(i,j-1,m,n,move+'L',ans,v);
            v[i][j]=0;
        }
        //right
        if(j+1<n && !v[i][j+1] && m[i][j+1]==1){
            v[i][j]=1;
            f(i,j+1,m,n,move+'R',ans,v);
            v[i][j]=0;
        }
        //up
        if(i-1>=0 && !v[i-1][j] && m[i-1][j]==1){
            v[i][j]=1;
            f(i-1,j,m,n,move+'U',ans,v);
            v[i][j]=0;
        }
        
    }
    
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;//ans which will be returned in here 
        vector<vector<int>>v(n,vector<int>(n,0));// VISITED OR NOT 
        if(m[0][0]==1)  f(0,0,m,n,"",ans,v);//if the first is feasible to be visited 
        //0 0 IS EQUAL TO 1 THEN IT IS PERMITTED TO MOVE SO WE START THE MOVING M IS 
        return ans;
    }
};
https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rat-in-a-maze-problem
