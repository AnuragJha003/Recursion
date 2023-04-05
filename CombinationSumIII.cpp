class Solution {
public:
    vector<vector<int>> res;
    set<vector<int>>s;//global declaraton krke rkhe h 
    
    
    void f(int i,int k,int n,vector<int> &v,vector<int> &ds){
        if(k==0 && n==0){//k elmnts make up the target n then 
            res.push_back(ds);
            return;
        }//if targett bcms 0 after taking k elmnts exact
        if(k<0 || n<0){//if not possible
            return;
        }//if not possible 
        if(i==v.size()){
            return;
        }//if i reched till end but no possible combination found 
        //skip the elmnt
        f(i+1,k,n,v,ds);
        //take the elmnt
        ds.push_back(v[i]);//add it to possible combinaton vector 
        f(i+1,k-1,n-v[i],v,ds);//then recursive call
        //backtracking
        
        ds.pop_back();//backtracking to get proper output if it is possible to exclude and then take some elmnt in the combination after we tkae the values 
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v={1,2,3,4,5,6,7,8,9};//NUMBER OF VECTOR ALL POSSIBILITIES 
        vector<int> ds;//STORING ALL POSSIBLE COMBINATIONS IN A PRATICULAR TIME 
        f(0,k,n,v,ds);//I=0 IS THE SIZE OF COMBINATION K SIZED HONA CHAHIYE N IS THE SUM 
        //V 1TO 9 KA VECTOR H AND DS IS ONE POSSIBLE COMBINATION 
        return res;//RETURN RES 
    }
};
https://leetcode.com/problems/combination-sum-iii/
